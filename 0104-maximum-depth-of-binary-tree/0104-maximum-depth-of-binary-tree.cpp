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
    int maxDepth(TreeNode* root) { 
        return calcMaxDepth(root,1);
    }
    int calcMaxDepth(TreeNode* current, int depth){
        if(current == nullptr) return depth-1;

        return max(calcMaxDepth(current->left,depth+1),
        calcMaxDepth(current->right,depth+1));
    }
};