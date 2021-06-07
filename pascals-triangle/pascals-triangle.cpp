class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> answer;
        for(int i=0;i<numRows;i++){
            vector<int> temp;
            for(int j=0;j<=i;j++){
                if(j==0||j==i)temp.push_back(1);
                else temp.push_back(answer[i-1][j-1]+answer[i-1][j]);
            }
            answer.push_back(temp);
        }
        return answer;
    }
};