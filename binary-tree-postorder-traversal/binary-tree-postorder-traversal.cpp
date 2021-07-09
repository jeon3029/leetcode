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
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int> answer;
        postTraversal(answer,root);
        return answer;
    }
    void postTraversal(vector<int> &answer,TreeNode* node){
        if(!node)return;
        postTraversal(answer,node->left);
        postTraversal(answer,node->right);
        answer.push_back(node->val);
    }
};