class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> countMap;
        for(auto& n : nums){
            countMap[n]++;
        }

        int n = nums.size();
        vector<vector<int>> bucket(n+1);

        for(auto& pair : countMap){
            int num = pair.first;
            int freq = pair.second;
            bucket[freq].push_back(num);
        }

        vector<int> res;

        for(int i = n;i >= 0;i--){
            for(auto& n : bucket[i]){
                res.push_back(n);
            }
            if(res.size() == k){
                return res;
            }
        }

        return res;
    }
};
