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
    vector<int> rightSideView(TreeNode* root) {
        queue<TreeNode*> q;
        vector<int> res;
        if(root==nullptr) return res;

        q.push(root);
        while(!q.empty()){
            int sizee=q.size();
            for(int i=0;i<sizee;i++){
                TreeNode* curr=q.front();
                q.pop();
                if(curr->left!=nullptr) q.push(curr->left);
                if(curr->right!=nullptr) q.push(curr->right);

                if(i==(sizee-1)){
                    res.push_back(curr->val);
                }
            }
        }
        return res;
    }
};
