
class Solution {
public:
    string reverseVowels(string s) {
        unordered_set<char> vowels = 
            {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        stack<char> st;
        queue<int> qu;
        for(int i=0;i<s.length();i++){
            if(vowels.contains(s[i])){
                st.push(s[i]);
                qu.push(i);
            }
        }
        
        while(!st.empty()){
            char c = st.top();
            int i = qu.front();
            s[i] = c;
            qu.pop();
            st.pop();
        }
        return s;
    }
};