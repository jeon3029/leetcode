class Solution {
public:
    bool isSubsequence(string s, string t) {
        int i=0,j=0;
        while(i<s.length()){
            if(s[i] == t[j]){
                i++;
                j++;continue;
            }
            else{
                j++;
                if(j>=t.length())return false;
            }
        }
        return true;
    }
};