// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        long long left = 1;
        long long right = n;
        while(1){
            if(right-left==1){
                if(isBadVersion(left)==false && isBadVersion(right)==true){
                return right;
            }    
            }
            
            long long cur = (left + right)/2;
            if(isBadVersion(cur) == true){
                right = cur;
                if(left == right){
                    return cur;
                }
            }
            else{
                left = cur;
            }
        }
    }
};