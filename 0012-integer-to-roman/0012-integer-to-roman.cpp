
class Solution {
public:
    string intToRoman(int num) {
        string answer = "";
        while(num>=1000){
            answer+="M";
            num-=1000;
        }
        while(num>=500){
            if(num>=900){
                answer+="CM";
                num-=900;
                continue;
            }
            answer+="D";
            num-=500;
        }
        while(num>=100){
            if(num>=400){
                answer+="CD";
                num-=400;
                continue;
            }
            
            answer+="C";
            num-=100; 
            
        }
        while(num>=50){
            if(num>=90){
                answer+="XC";
                num-=90;
                continue;
            }
            answer+="L";
            num-=50;
        }
        while(num>=10){
            if(num>=40){
                answer+="XL";
                num-=40;
                continue;
            }
            
                answer+="X";
                num-=10;    
            
        }
        while(num>=5){
            if(num>=9){
                answer+="IX";
                num-=9;
                continue;
            }
            answer+="V";
            num-=5;
        }
        while(num>=1){
            if(num>=4){
                answer+="IV";
                num-=4;
                continue;
            }
            answer+="I";
            num-=1;    
        }
        return answer;
        
    }
};