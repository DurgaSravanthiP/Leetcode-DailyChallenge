#include <iostream>
using namespace std;
#include <vector>
bool kLengthApart(vector<int> &nums, int k)
{
    int n = nums.size();
    int lastone = -(k + 1);
    for (int i = 0; i < n; i++)
    {
        if (nums[i] == 1)
        {
            if (i - lastone - 1 < k)
                return false;
            lastone = i;
        }
    }
    return true;
}
int main()
{
    vector<int> nums = {1, 0, 0, 1, 0, 1};
    int k = 2;
    cout << kLengthApart(nums, k) << endl; // Output: true
    return 0;
}