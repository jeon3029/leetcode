class Solution {
public:
    int a[26];
    int b[26];
    bool canConstruct(string ransomNote, string magazine) {
        for(int i=0;i<magazine.size();i++){
            a[magazine[i]-'a']++;
        }
        for(int i=0;i<ransomNote.size();i++){
            a[ransomNote[i]-'a']--;
            if(a[ransomNote[i]-'a']<0){
                return false;
            }
        }
        return true;
    }
};