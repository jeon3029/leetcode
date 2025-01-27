class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int answer = 0;
        int current = 0;
        for(int x:gain){
            current +=x;
            if(current>answer)answer = current;
        }
        return answer;
    }
};