class Solution {
public:
    int selected[10];
    vector<vector<int>> answer;
    void dfs(vector<int> cur,const vector<int> &nums,int cnt){
        if(cnt==nums.size()){
            answer.push_back(cur);
        }
        else{
            for(int i=0;i<nums.size();i++){
                if(!selected[i]){
                    selected[i]=1;
                    cur.push_back(nums[i]);
                    dfs(cur,nums,cnt+1);
                    cur.pop_back();
                    selected[i]=0;
                }
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<int> temp;
        dfs(temp,nums,0);
        return answer;
    }
};