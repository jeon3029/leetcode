class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        stack<int> s;
        vector<int> visited(rooms.size(),0);
        for(int i=0;i<rooms[0].size();i++){
            s.push(rooms[0][i]);
        }
        visited[0] = 1;
        while(!s.empty()){
            int cur = s.top();
            if(visited[cur]){
                s.pop();
                continue;
            }
            else{
                for(int i=0;i<rooms[cur].size();i++){
                   s.push(rooms[cur][i]);
                }
                visited[cur]=1;
            }
        }
        for(int i=0;i<visited.size();i++){
            if(visited[i]==0)return false;
        }
        return true;
    }
};