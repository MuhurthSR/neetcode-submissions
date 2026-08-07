class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int> seen;

        for(int i = 0;i < nums.size();i++){
            int duplicate = nums[i];
            if(seen.contains(duplicate) && (i-seen[duplicate])<= k){
                return true;
            }
            seen[nums[i]] = i;
        }
        return false;
    }
};