class Solution {
public:
    int dp[100][100];
    vector<int> getRow(int rowIndex) {
        dp[0][0]=1;
        for(int i=1;i<=rowIndex;i++){
            for(int j=0;j<=i;j++){
                if(j==0 || j==i){
                    dp[i][j]=1;
                }
                else{
                    dp[i][j] = dp[i-1][j-1] + dp[i-1][j];
                }
            }
        }
        vector<int> answer(rowIndex+1);
        for(int i=0;i<=rowIndex;i++){
            answer[i] = dp[rowIndex][i];
        }
        return answer;
    }
};