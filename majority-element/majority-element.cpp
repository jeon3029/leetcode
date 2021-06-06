class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i:nums){
            if(m.find(i)!=m.end()){
                m[i] = m[i]+1;
            }
            else{
                m[i]=1;
            }
        }
        for(auto i:nums){
            if(m[i]>nums.size()/2)return i;
        }
        return -1;
    }
};