class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> tracker(nums.begin(),nums.end());
        
        int streak = 0;

        for(auto& n : nums){
            if(tracker.find(n-1) == tracker.end()){
                int current_num = n;
                int current_streak = 1;

                while(tracker.find(current_num+1) != tracker.end()){
                    current_num++;
                    current_streak++;
                }
                streak = max(streak,current_streak);
            }
        }

        return streak;

    }
};
