class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        
        unordered_map<int,int> count;

        for(auto& n : nums){
            count[n]++;
        }

        vector<pair<int,int>> sorter;

        for(auto& entry : count){
            sorter.push_back({entry.second,entry.first});
        }

        sort(sorter.begin(),sorter.end(),greater<pair<int,int>>());

        vector<int> res;

        for(int i = 0; i < k ;i++){
            res.push_back(sorter[i].second);
        }

        return res;
    }
};
