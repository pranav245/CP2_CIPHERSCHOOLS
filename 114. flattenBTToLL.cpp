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
    
    TreeNode* flat(TreeNode* root)
    {
        if (root == NULL)
            return NULL;
        root->right = flat(root->right);
        root->left = flat(root->left);  
        
        TreeNode* temp = root->right;        
        
        root->right = root->left;
        root->left = NULL;
        
        TreeNode *temp2 = root;
        
        while(temp2 && temp2->right)
            temp2 = temp2->right;
        
        if (temp2)
        {
            temp2->right = temp;
            temp2->left = NULL;
        }
        return root;
    }
    
    
    void flatten(TreeNode* root) {
        flat(root);
        
    }
};
