class Solution {
    
public:
    vector<string> splitStringBySpaces(const std::string& input) {
        vector<string> result;
        stringstream ss(input);
        string word;
        while (ss >> word) {
            result.push_back(word);
        }
        return result;
    }
    bool areSentencesSimilar(string sentence1, string sentence2) {
        vector<string> s1 = splitStringBySpaces(sentence1);
        vector<string> s2 = splitStringBySpaces(sentence2);
        if (s1.size() > s2.size()) {
        std::swap(s1, s2);
        }

        // Try to match the prefix
        int i = 0;
        while (i < s1.size() && s1[i] == s2[i]) {
            i++;
        }

        // Try to match the suffix
        int j = 0;
        while (j < s1.size() - i && s1[s1.size() - 1 - j] == s2[s2.size() - 1 - j]) {
            j++;
        }

        // If the matched prefix and suffix cover the entire smaller sentence, return true
        return i + j == s1.size();
        }
};