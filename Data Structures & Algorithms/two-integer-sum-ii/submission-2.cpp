class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        vector<int> sol;

        int l = 0;
        int r = numbers.size()-1;

        while(true){
            if(l < r && (numbers[l]+numbers[r] < target)){
                l++;
                continue;
            }
            else if(l < r && (numbers[l]+numbers[r] > target)){
                r--;
                continue;
            }
            else{
                sol.push_back(l+1);
                sol.push_back(r+1);
                break;
            }
        }

        return sol;
    }
};
