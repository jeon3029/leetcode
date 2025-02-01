class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> answer;
        int c = 1<<1;
        for(int i=0;i<=n;i++){
            if(i==0) answer.push_back(0);
            if(i==1) answer.push_back(1);
            else{
                if(i>=c && i< c<<1){
                    answer.push_back(1+answer[i-c]);
                }
                else if(i>= c<<1){
                    c = c<<1;
                    answer.push_back(1+answer[i-c]);
                }
            }
        }
        return answer;
    }
};