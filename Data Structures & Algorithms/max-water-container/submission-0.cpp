class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l = 0;
        int r = heights.size()-1;
        int max_area = 0;
        int area = 0;
        int min_height = 0;
        while(l<r){
            min_height = min(heights[l],heights[r]);
            area = min_height*(r-l);
            max_area = max(max_area,area);
            heights[l]<heights[r]?l++:r--;
        }

        return max_area;
    }
};
