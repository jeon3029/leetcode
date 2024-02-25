class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> answer;
        if(nums.size()==0)return answer;
        if(nums.size()==1){
            answer.push_back(to_string(nums[0]));
            return answer;
        }
        
        string s = "";
        string right = "";
        for(int i=0;i<nums.size();i++){
            if(s==""){
                s=to_string(nums[i]);
                right = to_string(nums[i]);
                continue;
            }
            int x = stoi(right);
            if(nums[i]==x+1){
                right = to_string(nums[i]);
            }
            else{
                if(s==right){
                    answer.push_back(s);
                }
                else{
                    answer.push_back(s+"->"+right);
                }
                s=to_string(nums[i]);
                right = to_string(nums[i]);
            }
        }
        if(s!=""){
            if(s==right){
                answer.push_back(s);
            }
            else{
                answer.push_back(s+"->"+right);
            }
        }
        return answer;
    }
};