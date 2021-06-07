class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int answer = (n*(n+1))/2;
        for(auto i:nums){
            answer-=i;
        }
        return answer;
    }
};