class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> tracker;

        for(const string& s : strs){
            string key(26,0);

            for(char c : s){
                key[c-'a']++;
            }

            tracker[key].push_back(s);
        }

        vector<vector<string>> res;

        for(auto& pair : tracker){
            res.push_back(pair.second);
        }

        return res;
    }
};
