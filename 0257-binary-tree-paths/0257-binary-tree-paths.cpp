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
    vector<string> answer;
    void findPath(TreeNode* root,string s){
        if(root == NULL)return;
        if(s==""){
            s+=to_string(root->val);
        }
        else{
            s+="->"+to_string(root->val);
        }
        if(root->left == NULL && root->right==NULL){
            answer.push_back(s);
            return;
        }
        findPath(root->left,s);
        findPath(root->right,s);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        findPath(root,"");    
        return answer;
    }
};