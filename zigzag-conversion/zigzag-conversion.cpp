class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> result(numRows,"");
        int curPos = 0;
        int dir = 1;
        for(int i=0;i<s.size();i++){
            result[curPos].append(1,s[i]);
            if(numRows==1){
                dir=0;
            }
            else if(curPos==0 && dir==-1){
                dir=1;
            }
            else if(curPos==numRows-1&&dir==1){
                dir=-1;
            }
            
            curPos+=dir;
        }
        string answer;
        for(int i=0;i<result.size();i++){
            answer.append(result[i]);
        }
        return answer;
    }
};