class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int size = nums.size();
        size+=size;
        vector<int> ans(size);

        for(int i = 0;i < nums.size();i++){
            ans[i] = nums[i];
            ans[(nums.size())+i] = nums[i];
        }

        return ans;
    }
};