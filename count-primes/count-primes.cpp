class Solution {
public:
    int check[5000001];
    int countPrimes(int n) {
        if(n<2)return 0;
        int x = n/2;
        int cnt=0;
        for(int i=2;i<n;i++){
            if(check[i]==0)cnt++;
            else continue;
            for(int j=1;;j++){
                if(j*i>=n)break;
                check[j*i]=1;
            }
        }
        return cnt;
    }
};