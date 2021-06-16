class Solution {
public:
    int getLowerAlpha(char c){
        if(c>='A' && c<='Z')return 'a' + c-'A';
        else if(c>='a' && c<='z')return c;
        else if(c>='0' && c<='9')return c;
        else return 0;
    }
    bool isPalindrome(string s) {
        string deletedS;
        for(auto c:s){
            char temp = getLowerAlpha(c);
            if(temp==0)continue;
            else deletedS.append(1,temp);
        }
        for(int i=0;i<deletedS.size()/2;i++){
            if(deletedS[i]!=deletedS[deletedS.size()-1-i])return false;
        }
        return true;
    }
};