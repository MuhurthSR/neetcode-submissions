class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set<int> count;

        for(auto& num : nums){
            auto it = count.find(num);
            if(it != count.end()){
                return true;
            }
            count.insert(num);
        }

        return false;
    }
};