class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> result;
        int i=0,j=0;
        while(i<nums.size() && j<nums.size()){
            if(i==j || i>j){
                j++;
                continue;
            }
            if(nums[i] == 0 && nums[j] == 0){
                j++;
                continue;
            }
            if(nums[i] == 0 && nums[j] != 0){
                int temp = nums[j];
                nums[j] = nums[i];
                nums[i] = temp;
                i++;continue;
            }
            if(nums[i]!=0){
                i++; continue;
            }
        }
    }
};