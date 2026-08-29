class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int ptr = digits.size()-1;

        while(ptr >= 0){
            if(digits[ptr] < 9){
                digits[ptr]++;
                return digits;
            }
            else{
                digits[ptr] = 0;
                ptr--;
            }
        }

        digits[0] = 1;
        digits.push_back(0);

        return digits;
    }
};
