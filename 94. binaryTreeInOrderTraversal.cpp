/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root)
    {
        vector<int> V;
        inOrder(root, V);
        return V;
    }
    void inOrder(TreeNode* root, vector<int>& V)
    {
        if (!root)
            return;
        TreeNode* left = root->left;
        TreeNode* right = root->right;
        inOrder(left, V);
        V.push_back(root->val);
        inOrder(right, V);
  }
};
