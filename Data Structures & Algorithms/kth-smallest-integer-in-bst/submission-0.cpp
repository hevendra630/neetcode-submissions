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
void dfs(TreeNode* root,int &k,int &ans){
    if(root==nullptr || k==0) return ;
    dfs(root->left,k,ans);
    k--;  // bcoz the moment i touch a node i reduce k from the ground
    if(k==0){
        ans=root->val;
        return ;
    }
    dfs(root->right,k,ans);

    
}
    int kthSmallest(TreeNode* root, int k) {
        int ans=-1;
        dfs(root,k,ans);
        return ans;
    }
};
