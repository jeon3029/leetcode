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
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        if(nums.size()==0)return nullptr;
        TreeNode* root = gen_tree(0,nums.size()-1,nums);
        return root;
    }
    TreeNode* gen_tree(int lo, int hi,vector<int> &nums){
        if(lo>hi)return nullptr;
        int mid = (lo+hi)/2;
        TreeNode* curNode = new TreeNode(nums[mid]);
        curNode->left = gen_tree(lo,mid-1,nums);
        curNode->right = gen_tree(mid+1,hi,nums);
        return curNode;
    }
};