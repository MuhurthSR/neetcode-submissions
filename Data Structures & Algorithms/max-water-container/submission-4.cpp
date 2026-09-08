class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size()-1;
        int result = 0;
        while(left < right){
            int current_Area = (right-left)*min(heights[left],heights[right]);

            if(heights[left] < heights[right]){
                left ++;
            }
            else if(heights[left] > heights[right]){
                right--;
            }
            else{
                left++;
            }
            result = max(current_Area,result);
        }

        return result;
    }
};
