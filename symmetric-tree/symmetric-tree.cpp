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
    bool isSymmetric(TreeNode* root) {
        if(check(root->left,root->right)){
            return true;
        }
        return false;
    }
    bool check(TreeNode* left, TreeNode* right){
        if(!left && !right){
            return true;
        }
        if(left&& !right)return false;
        if(!left && right)return false;
        else{
            if(left->val != right->val){
                return false;
            }
            if(check(left->left,right->right) && check(left->right ,right->left)){
                return true;
            }
        }
        return false;
    }
};