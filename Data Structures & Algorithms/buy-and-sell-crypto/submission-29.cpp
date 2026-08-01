class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minval = 0;
        int maxval = 1;
        int maxprofit = 0;

        while(maxval < prices.size()){
            if(prices[maxval] < prices[minval]){
                minval = maxval;
            }
            else{
                maxprofit = max((prices[maxval]-prices[minval]),maxprofit);
            }
            maxval++;
        }

        return maxprofit;
    }
};
