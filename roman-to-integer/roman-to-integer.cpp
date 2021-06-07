class Solution {
public:
    int romanToInt(string s) {
        vector<int> m(26,0);
        m['I'-'A']=1;
        m['V'-'A']=5;
        m['X'-'A']=10;
        m['L'-'A']=50;
        m['C'-'A']=100;
        m['D'-'A']=500;
        m['M'-'A']=1000;
        int answer = 0;
        for(int i=0;i<s.size();i++){
            if(i<s.size()-1){
                if(s[i]=='I' && (s[i+1]=='X'||s[i+1]=='V'))answer-=m[s[i]-'A'];
                else if(s[i]=='X' && (s[i+1]=='L'||s[i+1]=='C'))answer-=m[s[i]-'A'];
                else if(s[i]=='C' && (s[i+1]=='M'||s[i+1]=='D'))answer-=m[s[i]-'A'];
                else answer+=m[s[i]-'A'];
            }
            else answer+=m[s[i]-'A'];
        }
        return answer;
    }
};