class Solution {
public:
    int hammingDistance(int x, int y) {
        int cnt = 0;
        while(1){
            if(x==0 && y==0) break;
            int xx = x%2;
            int yy = y%2;
            if(xx!=yy){
                cnt ++;
            }
            x/=2;
            y/=2;
        }
        return cnt;
    }
};