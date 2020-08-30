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
    void pushVal(TreeNode* root, int level, vector<int>& V)
    {
        if(root==NULL) return;
        if(V.size()<level)
            V.push_back(root->val);
        
        pushVal(root->right,level+1,V);
        pushVal(root->left,level+1,V);
        return;
    }
    
    vector<int> rightSideView(TreeNode* root) {
        vector<int> V;
        
        pushVal(root,1,V);
        return V;
    }
};
