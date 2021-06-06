class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> m1,m2;
        if(s.size()!=t.size())return false;
        for(int i=0;i<s.size();i++){
            if(m1.find(s[i])==m1.end()){
                m1[s[i]]=1;
            }
            else m1[s[i]]=m1[s[i]]+1;
            if(m2.find(t[i])==m2.end()){
                m2[t[i]]=1;
            }
            else m2[t[i]]=m2[t[i]]+1;
        }
        for(int i=0;i<s.size();i++){
            if(m1[s[i]]!=m2[s[i]]){
                return false;
            }
        }
        return true;
    }
};