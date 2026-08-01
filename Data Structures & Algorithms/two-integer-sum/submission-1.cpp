class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> hash;
        for(int i = 0;i < nums.size();i++){
            int needed = target - nums[i];
            auto it = hash.find(needed);
            if(it != hash.end()){
                return {it->second,i};
            }
            hash[nums[i]] = i;
        }
        return {};
    }
};
