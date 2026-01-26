#include <iostream>
#include <climits>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> minimumAbsDifference(vector<int> &arr)
{
    int n = arr.size();
    int minDiff = INT_MAX;
    sort(arr.begin(), arr.end());
    for (int i = 1; i < n; i++)
    {
        minDiff = min(minDiff, arr[i] - arr[i - 1]);
    }
    vector<vector<int>> res;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] - arr[i - 1] == minDiff)
        {
            res.push_back({arr[i - 1], arr[i]});
        }
    }
    return res;
}

int main()
{
    vector<int> arr = {4, 2, 1, 3};
    vector<vector<int>> result = minimumAbsDifference(arr);
    for (const auto &pair : result)
    {
        cout << "[" << pair[0] << ", " << pair[1] << "] ";
    }
    cout << endl;
    return 0;
}