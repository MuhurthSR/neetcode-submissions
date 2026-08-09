class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        unordered_map<int,int> tracker;

        for(int i = 0;i < numbers.size();i++){
            int required = target - numbers[i];
            if(tracker.find(required) != tracker.end()) {
                return {tracker[required]+1, i+1};
            }
            tracker[numbers[i]] = i;
        }
        return {};
    }
};
