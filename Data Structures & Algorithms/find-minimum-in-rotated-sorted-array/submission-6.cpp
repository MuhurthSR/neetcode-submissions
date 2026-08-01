class Solution {
public:
    int findMin(vector<int> &nums) {
        int l = 0;
        int r = nums.size()-1;

        int sol = INT_MAX;

        while(l <= r){

            if(nums[l] <= nums[r]){
                sol = min(sol, nums[l]);
            }

            int mid = (l+r)/2;
            sol = min(sol,nums[mid]);

            if(nums[mid] >= nums[l]){
                l = mid+1;
            }
            else{
                r = mid-1;
            }
        }

        return sol;
    }
};
