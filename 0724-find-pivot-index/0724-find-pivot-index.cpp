
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        vector<int> cumulative_sum;
        int sum = 0;
        for(int x:nums){
            sum +=x;
            cumulative_sum.push_back(sum);
        }
        for(int i=0;i<nums.size();i++){
            int left_sum = 0;
            if(i!=0)left_sum = cumulative_sum[i-1];
            int right_sum = cumulative_sum[nums.size()-1]
            -cumulative_sum[i];
            if(left_sum == right_sum)return i;
        }
        return -1;
    }
};