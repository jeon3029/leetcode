class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int i=0;
        if(flowerbed.size()==1)return flowerbed[0]==0;
        while(n){
            if(i>= flowerbed.size())return false;
            if(flowerbed[i]!=0){
                i++;
                continue;
            }
            if(i==0){
                if(flowerbed[i+1]==0){
                    flowerbed[i] = 1;
                    n--;
                }else{
                }
            }
            else if(i== flowerbed.size()-1){
                if(flowerbed[i-1] == 0){
                    flowerbed[i] = 1;
                    n--;
                }
            }else{
                if(flowerbed[i-1] == 0 && flowerbed[i+1]==0){
                    flowerbed[i] = 1;
                    n--;
                }
            }
            i++;
        }
        return true;
    }
};