#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>
bool binarySearch(vector<int> &nums, int original)
{
    int n = nums.size();
    int st = 0, end = n - 1;
    while (st <= end)
    {
        int mid = st + (end - st) / 2;
        if (nums[mid] == original)
            return true;
        else if (nums[mid] > original)
        {
            end = mid - 1;
        }
        else
        {
            st = mid + 1;
        }
    }
    return false;
}
int findFinalValue(vector<int> &nums, int original)
{
    sort(nums.begin(), nums.end());
    while (binarySearch(nums, original))
    {
        original = original * 2;
    }
    return original;
}
int main()
{
    vector<int> nums = {5, 3, 6, 1, 12};
    int original = 3;
    int res = findFinalValue(nums, original);
    cout << res << endl;
    return 0;
}