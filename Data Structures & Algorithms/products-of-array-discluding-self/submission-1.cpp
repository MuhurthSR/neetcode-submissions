class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int lp = 1;
        int rp = 1;
        vector<int> sol(nums.size(),1);

        for(int i = 0;i < nums.size();i++){
            sol[i] *= lp;
            lp *=nums[i];
        }

        for(int j = nums.size()-1;j >= 0;j--){
            sol[j] *= rp;
            rp *= nums[j];
        }

        return sol;
    }
};
