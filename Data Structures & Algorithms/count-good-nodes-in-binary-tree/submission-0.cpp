/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNod() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
int finder(TreeNode* root,int maxi){
    if(root==nullptr) return 0;
    int count=0;
    if(root->val>=maxi){
        count++;
        maxi=root->val;
    }
    count+=finder(root->left,maxi);
    count+=finder(root->right,maxi);

    return count;
}
    int goodNodes(TreeNode* root) {
        //if 
        int leftcounter=0;
        int rightcounter=0;
        leftcounter+=finder(root->left,root->val);
        rightcounter+=finder(root->right,root->val);

        return 1+leftcounter+rightcounter;
    }
};
