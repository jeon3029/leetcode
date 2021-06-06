class Solution {
public:
    int singleNumber(vector<int>& nums) {
        unordered_map<int,int> m;
        for(auto i : nums){
            if(m.find(i)!=m.end()){
                m[i]=2;
            }
            else{
                m[i]=1;
            }
        }
        for(auto i:nums){
            if(m[i]==1)return i;
        }
        return -1;
    }
};