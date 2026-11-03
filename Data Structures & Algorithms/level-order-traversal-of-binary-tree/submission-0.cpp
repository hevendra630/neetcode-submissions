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
    vector<vector<int>> levelOrder(TreeNode* root) {
        
        queue<TreeNode*> q;
        vector<vector<int>> res;
        if(root==nullptr) return res;
        q.push(root);
        while(!q.empty()){
            int sizee=q.size();
            vector<int> currlev;
            for(int i=0;i<sizee;i++){
                TreeNode* currnode=q.front();
                q.pop();
                if(currnode->left!=nullptr) q.push(currnode->left);
                if(currnode->right!=nullptr) q.push(currnode->right);

                currlev.push_back(currnode->val);
            }
            res.push_back(currlev);
        }
        return res;
    }
};
