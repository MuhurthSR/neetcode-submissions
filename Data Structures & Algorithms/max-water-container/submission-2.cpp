class Solution {
public:
    int maxArea(vector<int>& heights) {
        int p1 = 0;
        int p2 = heights.size()-1;
        int area = 0;
        while(p2 > p1){
            int height = min(heights[p1],heights[p2]);
            int width = p2-p1;
            area = max((height*width),area);
            if(heights[p2] > heights[p1]){
                p1++;
            }
            else if(heights[p2] < heights[p1]){
                p2--;
            }
            else{
                p1++;
            }
        }

        return area;
    }
};
