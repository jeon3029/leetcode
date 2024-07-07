class Solution {
public:
    vector<string> splitStringBySpace(const std::string& str) {
        vector<string> tokens;
        size_t start = 0;
        size_t end = str.find(' ');

        while (end != std::string::npos) {
            tokens.push_back(str.substr(start, end - start));
            start = end + 1;
            end = str.find(' ', start);
        }

        tokens.push_back(str.substr(start));

        return tokens;
    }

    bool wordPattern(string pattern, string s) {
        unordered_map<string,string> pat;
        unordered_map<string,string> pat2;
        vector<string> tokens = splitStringBySpace(s);
        if(pattern.length() != tokens.size())return false;
        for(int i=0;i<pattern.length();i++){
            string temp(1,pattern[i]);
            auto it = pat.find(temp);
            if (it != pat.end()) {
                cout<<it->first<<" "<<it->second<<endl;
                if(it->second == tokens[i])continue;
                else return false;
                
            }
            else{
                auto it2 = pat2.find(tokens[i]);
                if (it2 != pat.end()) {
                    if(temp != it2->second){
                        return false;
                    }
                }
                pat.insert({temp,tokens[i]});
                pat2.insert({tokens[i],temp});
            }
        }

        return true;
    }
};