class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int cnt = 0;
        int flag = 0;
        while(1){
            if(cnt>=strs[0].size())break;
            char c = strs[0][cnt];
            for(int i=1;i<strs.size();i++){
                if(strs[i][cnt]!=c){
                    flag=1;break;
                }
            }
            if(flag==1)break;
            cnt++;
        }
        return strs[0].substr(0,cnt);
        
    }
};