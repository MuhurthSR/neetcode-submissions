class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> hmap;

        for(auto str : strs){
            string temp = str;
            sort(temp.begin(),temp.end());
            hmap[temp].push_back(str);
        }

        vector<vector<string>> res;

        for(auto& a : hmap){
            res.push_back(a.second);
        }

        return res;
    }
};
