class Solution {
public:    
    vector<int> getPi(string p){
        int m = (int)p.size(), j=0;
        vector<int> pi(m, 0);
        for(int i = 1; i< m ; i++){
            while(j > 0 && p[i] !=  p[j])
                j = pi[j-1];
            if(p[i] == p[j])
                pi[i] = ++j;
        }
        return pi;
    }
    int kmp(string s, string p){
        if(p.size()==0)return 0;
        auto pi = getPi(p);
        int n = (int)s.size(), m = (int)p.size(), j =0;
        for(int i = 0 ; i < n ; i++){
            while(j>0 && s[i] != p[j])
                j = pi[j-1];
            if(s[i] == p[j]){
                if(j==m-1){
                    return i-m+1;
                    j = pi[j];
                }else{
                    j++;
                }
            }
        }
        return -1;
    }
    int strStr(string haystack, string needle) {
        return kmp(haystack,needle);    
    }
};