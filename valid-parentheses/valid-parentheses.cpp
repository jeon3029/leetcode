class Solution {
public:
    bool isOpen(char c){
        return c=='('||c=='[' ||c=='{';
    }
    bool isClose(char c){
        return c==')'||c==']' ||c=='}';
    }
    bool isMatch(char c1,char c2){
        return (c1=='('&& c2==')') || (c1=='['&& c2==']') || (c1=='{'&& c2=='}') ;
    }
    bool isValid(string s) {
        stack<char> st;
        for(auto c:s){
            if(isOpen(c)){
                st.push(c);
            }
            else{
                if(st.empty()){
                    return false;
                }
                else{
                    if(isOpen(st.top()) && isMatch(st.top(),c)){
                        st.pop();
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return st.empty();
    }
};