#include <iostream>
#include <vector>
using namespace std;

vector<vector<int>> rangeAddQueries(int n, vector<vector<int>> &queries)
{
    vector<vector<int>> mat(n, vector<int>(n, 0));
    for (auto &query : queries)
    {
        int row1 = query[0];
        int col1 = query[1];
        int row2 = query[2];
        int col2 = query[3];
        for (int i = row1; i <= row2; i++)
        {
            mat[i][col1] += 1;
            if (col2 + 1 < n)
                mat[i][col2 + 1] -= 1;
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j < n; j++)
        {
            mat[i][j] += mat[i][j - 1];
        }
    }
    return mat;
}
int main()
{
    int n = 3;
    vector<vector<int>> queries = {{0, 0, 1, 1}, {1, 1, 2, 2}};
    vector<vector<int>> result = rangeAddQueries(n, queries);
    for (int i = 0; i < result.size(); i++)
    {
        for (int j = 0; j < result[i].size(); j++)
        {
            cout << result[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}