class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int left = 1;
        int right = 1;
        vector<int> sol(nums.size(),1);
        for(int i = 0;i < nums.size();i++){
            sol[i] *= left;
            left *= nums[i];
        }

        for(int j = nums.size()-1;j >= 0;j--){
            sol[j] *= right;
            right *= nums[j];
        }

        return sol;
    }
};
