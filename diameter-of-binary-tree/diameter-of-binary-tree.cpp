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
    int maxVal = 0;
    int maxDepth(TreeNode* root){
        if(root==nullptr)return 0;
        else return 1+ max(maxDepth(root->left),maxDepth(root->right));
    }
    void searchTree(TreeNode* root){
        if(root==nullptr)return;
        int temp = maxDepth(root->left) + maxDepth(root->right);
        if(temp>maxVal)maxVal = temp;
        searchTree(root->left);
        searchTree(root->right);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        searchTree(root);
        return maxVal;
    }
};