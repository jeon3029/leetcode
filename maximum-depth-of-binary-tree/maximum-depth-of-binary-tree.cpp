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
    int answer = 0;
    int maxDepth(TreeNode* root) {
        dfs(root,1);
        return answer;
    }
    void dfs(TreeNode* root,int cur){
        if(root==nullptr)return;
        if(cur>answer)answer = cur;
        if(root->left){
            dfs(root->left,cur+1);
        }
        if(root->right){
            dfs(root->right,cur+1);
        }
    }
};