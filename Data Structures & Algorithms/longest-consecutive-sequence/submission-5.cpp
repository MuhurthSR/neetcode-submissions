class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(), nums.end());

        int count = 0;
        for(auto& n : nums_set){
            if(!nums_set.contains(n-1)){
                int temp_count = 1;
                int current_num = n;
                while(nums_set.contains(current_num+1)){
                    temp_count++;
                    current_num++;
                }
                count = max(count,temp_count);
            }
        }
        return count;
    }
};
