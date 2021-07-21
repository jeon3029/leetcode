class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo=0;
        int hi=min(num,100000);
        
        while(lo<=hi){
            long long mid = (lo+hi)/2;
            long long x = mid*mid;
            if(x==num)return true;
            else if(x>num){
                hi=mid-1;
            }
            else{
                lo=mid+1;
            }
        }
        return false;
    }
};