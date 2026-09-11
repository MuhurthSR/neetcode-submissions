class Solution {
public:
    bool isValid(string s) {
        vector<char> tracker;

        for(auto& ch : s){
            if(ch == '('){
                tracker.push_back(')');
            }
            else if(ch == '{'){
                tracker.push_back('}');
            }
            else if(ch == '['){
                tracker.push_back(']');
            }
            else{
                if(tracker.empty() || tracker.back()!= ch){
                    return false;
                }
                tracker.pop_back();
            }
        }
        return tracker.empty();
    }
};
