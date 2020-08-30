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
    
    pair<int,bool> height(TreeNode* root)
    {
        pair<int,bool> p,left,right;
        
        if(root==NULL)
        {
            p.first = 0;
            p.second = true;
            return p;
        }
        
        left = height(root->left);
        right = height(root->right);
        
        int height = max(left.first , right.first) + 1;
        
        if(fabs(left.first - right.first) <=1 and left.second and right.second)
            return make_pair(height,true);
        
        return make_pair(height,false);
    }
    
    
    bool isBalanced(TreeNode* root) {
        
        if(root==NULL) return true;
        
        pair<int,bool> a = height(root);
        
        return a.second;
        
    }
};
