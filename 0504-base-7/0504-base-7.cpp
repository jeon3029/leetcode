#include<string>
#include <algorithm> 
class Solution {
public:
    string convertToBase7(int num) {
        if(num==0) return "0";
        string answer = "";
        bool minus = false;
        if(num<0){
            num = -num;
            minus = true;
        }
        while(num!=0){
            answer += to_string(num%7);
            num/=7;
        }
        reverse(answer.begin(),answer.end());
        if(minus)answer = "-" + answer;
        return answer;
    }
};