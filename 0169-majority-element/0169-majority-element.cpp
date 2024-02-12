

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int> m;
        for(auto e:nums){
            if(m.find(e) == m.end()){
                m[e] = 1;
            }
            else{
                m[e]++;
            }
        }
        int max = -987654321;
        int answer = 0;
        for (auto i = m.begin(); i != m.end(); i++) {
            if(i->second > max){
                max = i->second;
                answer = i->first;
                
            }    
        }
        return answer;
        
    }
};