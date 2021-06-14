class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
        vector<vector<int>> answer;
        unordered_map<string,int> m;
        for(int i=0;i<words.size();i++){
            m[words[i]]=i;
        }
        if(m.find("")!=m.end()){
            int idx = m[""];
            for(int i=0;i<words.size();i++){
                if(check(words[i]) && i!=idx){
                    answer.push_back({i,idx});
                    answer.push_back({idx,i});
                }
            }
        }
        for(int i=0;i<words.size();i++){
            string temp = words[i];
            reverse(temp.begin(),temp.end());
            if(m.find(temp)!=m.end() && m[temp]!=i){
                answer.push_back({i,m[temp]});
            }
        }
        for(int i=0;i<words.size();i++){
            for(int j=1;j<words[i].size();j++){
                string left = words[i].substr(0,j);
                string right = words[i].substr(j);
                if(check(left)){
                    string temp = right;
                    reverse(temp.begin(),temp.end());
                    if(m.find(temp)!=m.end()){
                        answer.push_back({m[temp],i});
                    }
                }
                if(check(right)){
                    string temp = left;
                    reverse(temp.begin(),temp.end());
                    if(m.find(temp)!=m.end()){
                        answer.push_back({i,m[temp]});
                    }
                }
            }
        }
        return answer;
    }
    bool check(string s){
        
        for(int i=0;i<s.size()/2;i++){
            if(s[i]!=s[s.size()-i-1])return false;
        }
        return true;
    }
};