class Solution {
public:
    int mySqrt(int x) {
        int lo = 0;
        int hi = x;
        if(x>46825)hi=46825;
        long long mid;
        while(lo<hi){
            mid  = (lo+hi)/2;
            // cout<<lo<<" "<<hi<<" "<<mid<<"\n";
            if(mid*mid<=x && (mid+1)*(mid+1)>x)break;
            else{
                if(mid*mid>x){
                    hi=mid-1;
                }
                else{
                    lo=mid+1;
                }
            }
        }
        return (lo+hi)/2;
    }
};