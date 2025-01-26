class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        set<int> n1(nums1.begin(),nums1.end());
        set<int> n2(nums2.begin(),nums2.end());
        vector<vector<int>> v;

        //calculate answer[0]
        set<int> temp =  n1;
        for(int x:n1){
            if(n2.find(x) != n2.end()){
                temp.erase(x);
            }
        }
        vector<int> v1(temp.begin(),temp.end());
        v.push_back(v1);

        //calcylate answer[1]
        temp = n2;
        for(int x:n2){
            if(n1.find(x) != n1.end()){
                temp.erase(x);
            }
        }
        vector<int> v2(temp.begin(),temp.end());
        v.push_back(v2);
        return v;
    }
};