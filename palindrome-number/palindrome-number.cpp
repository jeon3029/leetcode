class Solution {
public:
    bool isPalindrome(int x) {
        vector<int> s;
        if(x<0)return false;
        while(x){
            s.push_back(x%10);
            x/=10;
        }
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-1-i])return false;
        }
        return true;
    }
};