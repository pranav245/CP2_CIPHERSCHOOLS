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
    int xDepth=-1;
    int yDepth=-2;
    
    TreeNode *xParent=NULL,*yParent=NULL;
    
    bool isCousins(TreeNode* root, int x, int y) {
        
        DFS(root,NULL,x,y,0);
        
        return (xDepth==yDepth) and xParent != yParent;
        
    }
    
    void DFS(TreeNode *root,TreeNode *parent, int x, int y, int depth)
    {
        if(root==NULL) return;
        
        if(x==root->val)
        {
            xParent = parent;
            xDepth = depth; 
        }
        else if(y==root->val)
        {
            yParent = parent;
            yDepth = depth;
        }
        else
        {
            DFS(root->left,root,x,y,depth+1);
            DFS(root->right,root,x,y,depth+1);
        }
        
        
    }
};
