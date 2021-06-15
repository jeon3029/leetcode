class Solution {
public:
    int trailingZeroes(int n) {
        int divTwo = 0 ;
        int divFive = 0;
        if(n==0)return 0;
        for(int i=1;i<=n;i++){
            int temp = i;
            while(temp%2==0){
                temp=temp/2;
                divTwo++;
            }
            while(temp%5==0){
                temp=temp/5;
                divFive++;
            }
        }
        return min(divTwo,divFive);
    }
};