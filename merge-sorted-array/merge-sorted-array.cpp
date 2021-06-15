class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        vector<int> answer;
        int pos1 = 0,pos2=0;
        while(pos1<m && pos2<n){
            if(nums1[pos1]<nums2[pos2]){
                answer.push_back(nums1[pos1++]);
            }
            else{
                answer.push_back(nums2[pos2++]);
            }
        }
        if(pos1<m){
            while(pos1<m){
                answer.push_back(nums1[pos1++]);
            }
        }
        else{
            while(pos2<n){
                answer.push_back(nums2[pos2++]);
            }
        }
        nums1=answer;
    }
};