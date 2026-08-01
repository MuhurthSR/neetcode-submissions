class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        
        unordered_map<int,int> hmap;
        vector<int> sol(2);
        int required = 0;
        for(int i = 0; i < nums.size(); i++){
            required = target - nums[i];
            if(hmap.find(required) != hmap.end()){
                return {hmap[required], i};
            }
            hmap.emplace(nums[i],i);
        }
        return sol;

    }
};
