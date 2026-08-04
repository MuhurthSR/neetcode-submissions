class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> result(nums.size(),1);

        int left_prod = 1;
        for(int i = 0;i < nums.size();i++){
            result[i] = left_prod;
            left_prod*=nums[i];
        }

        int right_prod = 1;
        for(int j = nums.size()-1;j >= 0;j--){
            result[j] *= right_prod;
            right_prod*=nums[j];
        }

        return result;
    }
};
