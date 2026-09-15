class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,double>> tracker;

        for(int i = 0;i < position.size();i++){
            double eta = (double)(target - position[i])/speed[i];
            tracker.push_back({position[i],eta});
        }

        sort(tracker.begin(),tracker.end());
        vector<double> result;
        while(!tracker.empty()){
            if(result.empty()){
                result.push_back(tracker.back().second);
                tracker.pop_back();
            }
            else if(tracker.back().second > result.back()){
                result.push_back(tracker.back().second);
                tracker.pop_back();
            }
            else{
                tracker.pop_back();
            }
        }
        return result.size();
    }
};
