class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if(nums.size()==0)return 0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]==val){
                int j=i;
                while(j<nums.size()){
                    if(nums[j]!=val)break;
                    j++;
                }
                if(j==nums.size())break;
                swap(nums[i],nums[j]);
            }
        }
        int k=nums.size();
        for(int i=nums.size()-1;i>=0;i--){
            if(nums[i]==val)k--;
        }
        return k;
    }
};