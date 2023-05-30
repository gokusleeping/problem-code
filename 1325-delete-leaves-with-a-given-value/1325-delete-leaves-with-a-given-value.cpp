void solve(TreeNode* &root,int target){
        if(root==NULL){
            return;
        }
       
        solve(root->left,target);
        solve(root->right,target);
         if(root->left==NULL && root->right==NULL && root->val==target){
            root=NULL;
        }
        return;
    }
class Solution {
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        solve(root,target);
        return root;
    }
};