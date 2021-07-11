class Solution {
public:
    string convertToTitle(int columnNumber) {
        string answer;
        while(columnNumber>0){
            int cur = columnNumber % 26;
            if(cur==0) {
                answer.append(1,'Z');    
                if(columnNumber==26)break;
                columnNumber/=26;
                columnNumber--;
            }
            else {
                answer.append(1,'A'+cur-1);
                columnNumber/=26;
            }
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};
// 701 = 26*26 + 25
    
// Y
// Z

// 52 + 26*2 + 0
    
// Z
// 2