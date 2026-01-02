#include <iostream>
#include <vector>
using namespace std;

int repeatedNTimes(vector<int> &nums)
{
    for (int i = 2; i < nums.size(); i++)
    {
        if (nums[i] == nums[i - 2] || nums[i] == nums[i - 1])
        {
            return nums[i];
        }
    }
    return nums.back();
}
int main()
{
    vector<int> nums = {1, 2, 3, 3};
    cout << repeatedNTimes(nums) << endl;
    return 0;
}