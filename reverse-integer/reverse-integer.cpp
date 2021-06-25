class Solution {
public:
    int reverse(int x) {
        bool minus=x<0;
        long long answer = 0;
        while(x){
            answer*=10;
            answer+=x%10;
            x/=10;
        }
        int64_t m=(1LL<<31)-1;
        if(answer>m){
            return 0;
        }
        if(minus && answer<(-m-1)){
            return 0;
        }
        return answer;
    }
};