class Solution {
public:
    bool isHappy(int n) {
        unordered_map<int,int> m;
        while(1){
            if(m.find(n)==m.end()){
                m[n] = 1;
                int temp = n;
                int next = 0;
                while(temp!=0){
                    int t = temp%10;
                    next += t*t;
                    temp/=10;
                }
                n=next;
                if(n==1)return true;
            }
            else{
                return false;
            }
        }
        return false;
    }
};