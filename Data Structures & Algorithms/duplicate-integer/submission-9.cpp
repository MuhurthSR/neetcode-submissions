class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        unordered_set <int> contain;
        for(auto num : nums){
            if(contain.find(num) != contain.end()){
                return true;
            }
            contain.insert(num);
        }
        return false;
    }
    
};