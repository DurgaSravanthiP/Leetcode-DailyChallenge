#include <iostream>
using namespace std;
#include <vector>

int minOperations(vector<int> &nums, int k)
{
    int n = nums.size();
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += nums[i];
    }
    int t = sum % k;
    return t;
}
int main()
{
    vector<int> nums = {3, 1, 4, 2};
    int k = 6;
    cout << minOperations(nums, k) << endl;
    return 0;
}