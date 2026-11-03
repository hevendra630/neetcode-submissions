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
bool sametree(TreeNode* m,TreeNode* n){
    if(m==nullptr && n==nullptr) return true;
    if(m==nullptr || n==nullptr) return false;
    if(m->val !=n->val)return false;

    return sametree(m->left,n->left) && sametree(m->right,n->right);
}
    bool isSubtree(TreeNode* root, TreeNode* subRoot) {
        if(subRoot==nullptr) return true;
        if(root==nullptr || subRoot==nullptr) return false;
        if(root->val==subRoot->val){
            if(sametree(root,subRoot)){
                return true;
            }
        }
        return isSubtree(root->left,subRoot) || isSubtree(root->right,subRoot);
    }
};
