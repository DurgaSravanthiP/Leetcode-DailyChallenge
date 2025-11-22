#include <iostream>
using namespace std;
#include <vector>

int minimumOperations(vector<int> &nums)
{
    int count = 0;
    for (int i = 0; i < nums.size(); i++)
    {
        if (nums[i] % 3 != 0)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    vector<int> nums = {4, 5, 6, 7, 8};
    int res = minimumOperations(nums);
    cout << res << endl;
    return 0;
}