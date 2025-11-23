#include<iostream>
using namespace std;
#include<vector>
#include<algorithm>
#include<climits>
int maxSumDivThree(vector<int> &nums)
{
    int sum = 0;
    vector<int> remain1;
    vector<int> remain2;
    for (int i = 0; i < nums.size(); i++)
    {
        sum += nums[i];
        if (nums[i] % 3 == 1)
        {
            remain1.push_back(nums[i]);
        }
        else if (nums[i] % 3 == 2)
        {
            remain2.push_back(nums[i]);
        }
    }
    if (sum % 3 == 0)
    {
        return sum;
    }
    sort(remain1.begin(), remain1.end());
    sort(remain2.begin(), remain2.end());
    int result = 0;
    int remove1, remove2;
    if (sum % 3 == 1)
    {
        remove1 = remain1.size() >= 1 ? remain1[0] : INT_MAX;
        remove2 = remain2.size() >= 2 ? remain2[0] + remain2[1] : INT_MAX;
        result = sum - min(remove1, remove2);
    }
    else
    {
        remove1 = remain2.size() >= 1 ? remain2[0] : INT_MAX;
        remove2 = remain1.size() >= 2 ? remain1[0] + remain1[1] : INT_MAX;
        result = sum - min(remove1, remove2);
    }
    return result;
}
int main()
{
    vector<int> nums = {3, 6, 5, 1, 8};
    cout << maxSumDivThree(nums) << endl;
    return 0;
}