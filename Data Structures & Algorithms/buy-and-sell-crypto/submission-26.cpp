class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int l = 0;
        int h = 1;
        int res = 0;

        while(h < prices.size()){
            if(prices[l] < prices[h]){
                res = max(prices[h]-prices[l],res);
            }
            else {
                l=h;
            }
            h++;
        }
        return res;
    }
};
