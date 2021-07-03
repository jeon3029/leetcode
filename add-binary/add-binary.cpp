class Solution {
public:
    string addBinary(string a, string b) {
        string answer = "";
        reverse(a.begin(),a.end());
        reverse(b.begin(),b.end());
        int carry = 0;
        int i=0;
        for(;i<a.size()&&i<b.size();i++){
            int aa=0;int bb=0;
            if(a[i]=='1')aa=1;
            if(b[i]=='1')bb=1;
            int c = aa+bb+carry;
            if(c>1){
                carry=1;
                c-=2;
            }
            else{
                carry=0;
            }
            answer.append(1,c+'0');
        }
        for(;i<a.size();i++){
            int aa=0;
            if(a[i]=='1')aa=1;
            int c = aa+carry;
            if(c>1){
                carry=1;
                c-=2;
            }
            else{
                carry=0;
            }
            answer.append(1,c+'0');
        }
        for(;i<b.size();i++){
            int bb=0;
            if(b[i]=='1')bb=1;
            int c = bb+carry;
            if(c>1){
                carry=1;
                c-=2;
            }
            else{
                carry=0;
            }
            answer.append(1,c+'0');
        }
        if(carry==1){
            answer.append(1,'0'+carry);
        }
        reverse(answer.begin(),answer.end());
        return answer;
    }
};