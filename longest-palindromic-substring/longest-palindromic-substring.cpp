class Solution {
public:
    int dp[1001][1001];
    bool getDp(const string &s,int i,int j){
        if(j<i)return false;
        if(dp[i][j]!=-1){
            return dp[i][j];
        }
        if(i==j){
            dp[i][j]=1;
            if(i<s.size()-1 && s[i]==s[i+1])dp[i][i+1]=1;
            return 1;
        }
        dp[i][j] = getDp(s,i+1,j-1) && (s[i]==s[j]);
        return dp[i][j];
    }
    string longestPalindrome(string s) {
        for(int i=0;i<s.size();i++){
            for(int j=0;j<s.size();j++){
                dp[i][j]=-1;
            }
        }
        int answer=0;
        int st = -1;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if(getDp(s,i,j)==1){
                    if(j-i+1>answer){
                        answer = j-i+1;
                        st=i;
                    }
                }
            }
        }
        return s.substr(st,answer);
    }
};