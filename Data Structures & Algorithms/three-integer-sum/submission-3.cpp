class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> res;

        for (int i = 0; i < nums.size(); i++) {
            if (i > 0 && nums[i] == nums[i - 1]) {
                continue;
            }

            int lptr = i + 1; 
            int rptr = nums.size() - 1;

            while (lptr < rptr) {
                int sum = nums[i] + nums[lptr] + nums[rptr];

                if (sum > 0) {
                    rptr--; 
                } 
                else if (sum < 0) {
                    lptr++;
                } 
                else {
                    res.push_back({nums[i], nums[lptr], nums[rptr]});
                    
                    lptr++;
                    rptr--;

                    while (lptr < rptr && nums[lptr] == nums[lptr - 1]) {
                        lptr++;
                    }
                    while (lptr < rptr && nums[rptr] == nums[rptr + 1]) {
                        rptr--;
                    }
                }
            }
        }
        return res;
    }
};