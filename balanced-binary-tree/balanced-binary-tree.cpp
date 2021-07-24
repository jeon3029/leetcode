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
    static const int UNBALANCED = -99;
    int getHeight(TreeNode *root){
        if(root==nullptr){
            return 0;
        }
        int l = getHeight(root->left);
        int r = getHeight(root->right);
        if(l==UNBALANCED||r==UNBALANCED||abs(l-r)>=2)return UNBALANCED;
        return 1+max(l,r);
    }
    bool isBalanced(TreeNode* root) {
        return getHeight(root)!=UNBALANCED;
    }
};