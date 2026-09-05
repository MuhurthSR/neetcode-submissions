class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> tracker;

        for(auto& n : nums){
            if(tracker.find(n) != tracker.end()){
                return true;
            }
            tracker.insert(n);
        }

        return false;
    }
};