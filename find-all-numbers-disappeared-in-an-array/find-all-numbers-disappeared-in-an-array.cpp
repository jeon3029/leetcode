class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> answer;
        unordered_set<int> check;
        for(int i=0;i<nums.size();i++){
            check.insert(nums[i]);
        }
        for(int i=1;i<=nums.size();i++){
            if(check.find(i)==check.end()){
                answer.push_back(i);
            }
        }
        return answer;
    }
};