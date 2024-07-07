class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int answer = 0;
        answer += numBottles;
        while(numBottles){
            if(numBottles / numExchange ==0){
                break;
            }
            answer += numBottles / numExchange;
            numBottles = numBottles / numExchange + numBottles%numExchange;
        }
        return answer;
    }
};