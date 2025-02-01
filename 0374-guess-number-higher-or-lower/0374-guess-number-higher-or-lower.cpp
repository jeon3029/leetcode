/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        __int128 left = 1,right = n;
        __int128 mid = (left + right) / 2;
        while(left <= right){
            int p = guess(mid);
            if(p==0)return mid;
            if(p==1){
                left= mid+1;
                mid = (left+right)/2;
            }else{
                right= mid-1;
                mid = (left+right)/2;
            }
        }return 1;
    }
};