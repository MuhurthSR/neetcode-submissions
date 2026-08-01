class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        
        unordered_map<string,vector<string>>track;

        for(int i = 0 ; i < strs.size(); i++){
            string temp = strs[i];
            sort(temp.begin(),temp.end());
            string temp2 = strs[i];
            track[temp].push_back(strs[i]);
        }

        vector<vector<string>> res;

        for(auto& n : track){
            res.push_back(n.second);
        }

        return res;

    }
};
