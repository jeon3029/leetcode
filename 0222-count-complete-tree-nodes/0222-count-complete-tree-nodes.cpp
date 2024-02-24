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
    int cnt = 0;
    void counter(TreeNode* root){
        if(root == nullptr) return;
        cnt ++;
        counter(root->left);
        counter(root->right);
    }
    int countNodes(TreeNode* root) {
        counter(root);
        return cnt;
    }
};