class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> table;

        for(int i = 0;i < nums.size();i++){
            int required = target - nums[i];

            if(table.find(required) != table.end()){
                return {table[required],i};
            }

            table[nums[i]] = i;
        }
    }
};
