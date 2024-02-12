 bool logic(const pair<int,int> &a,
              const pair<int,int> &b)
    {
        if(a.first ==b.first)return a.second<b.second;
        return (a.first < b.first);
    }
class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        vector<pair<int,int>> sorted_nums;
        for(int i=0;i<nums.size();i++){
            sorted_nums.push_back({nums[i],i});
        }
        sort(sorted_nums.begin(), sorted_nums.end(),logic);
        for(int i=0;i<sorted_nums.size()-1;i++){
            if(sorted_nums[i].first == sorted_nums[i+1].first && 
              sorted_nums[i+1].second - sorted_nums[i].second <= k
              ){
                return true;
            }
        }
        return false;
    }
};