class Solution {
public:
    int maxArea(vector<int>& height) {
        int answer = -1;
        int left = 0;
        int right = height.size()-1;
        while(left<right){
            int curAreaSize = (right-left)*min(height[left],height[right]);
            answer = max(answer,curAreaSize);
            if(height[left]<height[right]) {
                left++;
            }
            else{
                right--;
            }
                
        }
        return answer;
    }
};