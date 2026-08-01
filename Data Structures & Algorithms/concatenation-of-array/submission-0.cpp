class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> sol = nums;
        for(auto& num : nums){
            sol.push_back(num);
        }
        return sol;
    }
};