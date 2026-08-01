class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> record;
        vector<vector<string>> sol;
        for(auto& str : strs){
            string temp = str;
            sort(temp.begin(),temp.end());
            record[temp].push_back(str);
        }

        for(auto& n : record){
            sol.push_back(n.second);
        }

        return sol;
    }
};
