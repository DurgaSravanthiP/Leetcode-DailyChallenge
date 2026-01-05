#include <iostream>
#include <vector>
#include <cmath>
#include <climits>
using namespace std;
long long maxMatrixSum(vector<vector<int>> &matrix)
{
    int n = matrix.size();
    long long sum = 0;
    int oddNeg = 0;
    int minVal = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            sum += abs(matrix[i][j]);
            if (matrix[i][j] < 0)
            {
                oddNeg++;
            }
            minVal = min(minVal, abs(matrix[i][j]));
        }
    }
    if (oddNeg % 2 == 0)
    {
        return sum;
    }
    else
    {
        return sum - 2 * minVal;
    }
}
int main()
{
    vector<vector<int>> matrix = {
        {-1, -2, -3},
        {-4, 5, 6},
        {7, 8, 9}};
    cout << maxMatrixSum(matrix) << endl;
    return 0;
}
