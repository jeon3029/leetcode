class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        for(int i=digits.size()-1;i>=0;i--){
            if(carry==0){
                break;
            }
            else{
                int cur = digits[i] + carry;
                if(cur>=10){
                    carry=1;
                    digits[i] = cur-10;
                    if(i==0){
                        vector<int>::iterator it;
                        it = digits.begin();
                        digits.insert(it,1);
                    }
                }
                else{
                    digits[i] = cur;
                    carry=0;
                }
            }
        }
        return digits;
    }
    
};