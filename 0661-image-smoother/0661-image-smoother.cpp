class Solution {
public:
    int dx[3] = {-1,0,1};
    int dy[3] = {-1,0,1};
    vector<vector<int>> imageSmoother(vector<vector<int>>& img) {
        vector<vector<int>> ret(img.size(),vector<int>(img[0].size(),0));
        for(int i=0;i<img.size();i++){
            for(int j=0;j<img[0].size();j++){
                ret[i][j] = average(img,i,j);
            }
        }
        return ret;
    }
    int average(vector<vector<int>>& img,int y,int x){
        int n=0;
        int sum = 0;
        for(int i=0;i<3;i++){
            int ny = y + dy[i];
            if(ny<0 || ny>=img.size())continue;
            for(int j=0;j<3;j++){
                int nx = x + dx[j];
                if(nx<0 || nx>=img[0].size())continue;
                sum+=img[ny][nx];
                n++;
            }
        }
        if(n==0)return 0;
        return sum/n;
    }
};