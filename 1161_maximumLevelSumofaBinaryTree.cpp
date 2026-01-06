#include <iostream>
#include <queue>
#include <climits>
using namespace std;
struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
int maxLevelSum(TreeNode *root)
{
    int maxSum = INT_MIN;
    int resultLevel = 0;
    queue<TreeNode *> que;
    que.push(root);
    int currLevel = 1;
    while (!que.empty())
    {
        int n = que.size();
        int sum = 0;
        while (n--)
        {
            TreeNode *temp = que.front();
            que.pop();
            sum += temp->val;
            if (temp->left)
            {
                que.push(temp->left);
            }
            if (temp->right)
            {
                que.push(temp->right);
            }
        }
        if (sum > maxSum)
        {
            maxSum = sum;
            resultLevel = currLevel;
        }
        currLevel++;
    }
    return resultLevel;
}
int main()
{
    TreeNode *root = new TreeNode(1);
    root->left = new TreeNode(7);
    root->right = new TreeNode(0);
    root->left->left = new TreeNode(7);
    root->left->right = new TreeNode(-8);
    cout << maxLevelSum(root) << endl;
    return 0;
}
