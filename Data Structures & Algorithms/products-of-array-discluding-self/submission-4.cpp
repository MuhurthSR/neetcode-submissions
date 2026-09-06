class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n,1);
        int product = 1;
        for(int i = 0;i < n;i++){
            res[i]*=product;
            product*=nums[i];
        }
        product = 1;
        for(int j = n-1;j >= 0;j--){
            res[j]*=product;
            product*=nums[j];
        }

        return res;
    }
};
