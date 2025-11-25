#include <iostream>
using namespace std;
#include <vector>

vector<bool> prefixesDivBy5(vector<int> &nums)
{
    int n = nums.size();
    vector<bool> result(n);
    int curr = 0;
    for (int i = 0; i < n; i++)
    {
        curr = ((curr * 2) % 5 + nums[i] % 5) % 5;
        if (curr == 0)
        {
            result[i] = true;
        }
        else
        {
            result[i] = false;
        }
    }
    return result;
}
int main()
{
    vector<int> nums = {0, 1, 1};
    vector<bool> result = prefixesDivBy5(nums);
    for(bool b : result) {
        cout << (b ? "true" : "false") << " ";
    }
    cout << endl;
    return 0;
}