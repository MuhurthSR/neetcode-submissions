class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<pair<int,int>> tracker;
        int n = temperatures.size();
        vector<int> result(n,0);
        for(int i = 0;i < n;i++){
            while(!tracker.empty() && temperatures[i] > tracker.back().first){
                int val = i - tracker.back().second;
                result[tracker.back().second] = val;
                tracker.pop_back();
            }
            tracker.push_back({temperatures[i],i});
        }
        return result;
    }
};
