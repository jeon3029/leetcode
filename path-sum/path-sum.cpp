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
    bool calc(TreeNode* node,int curSum, int targetSum){
        if(node == NULL)return false;
        curSum+=node->val;
        if(curSum==targetSum && !node->left && !node->right){
            return true;
        }
        return calc(node->left,curSum,targetSum)||calc(node->right,curSum,targetSum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return calc(root,0,targetSum);
    }
};