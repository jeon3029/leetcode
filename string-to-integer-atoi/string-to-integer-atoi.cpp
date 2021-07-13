class Solution {
public:
    int op;
    void ignoreWhiteSpaces(string &s){
        int i;
        for(i=0;i<s.size();i++){
            if(s[i]==' ')continue;
            else break;
        }
        s = s.substr(i,s.size()-i);
    }
    int checkOperator(string &s){
        if(s[0]=='-'){
            s = s.substr(1,s.size()-1);
            return -1;
        }
        else if(s[0]=='+'){
            s = s.substr(1,s.size()-1);
            return 1;
        }
        else return 0;
    }
    long long convertNumber(string &s){
        for(int i=0;i<s.size();i++){
            if(s[i]<'0' || s[i]>'9'){
                s=s.substr(0,i);
                break;
            }
        }
        long long answer=0;
        for(int i=0;i<s.size();i++){
            answer*=10;
            answer+=s[i]-'0';
            if(op==-1){
                if(answer>(0x1u<<31)){
                    answer = 0x1u<<31;
                    break;
                }
            }
            else{
                if(answer>(0x1u<<31)-1){
                    answer = (0x1u<<31)-1;
                    break;
                }
            }
        }
        if(op==-1)return -answer;
        else return answer;
    }
    int myAtoi(string s) {
        ignoreWhiteSpaces(s);
        op = checkOperator(s);
        long long digit = convertNumber(s);
        return digit;
    }
};