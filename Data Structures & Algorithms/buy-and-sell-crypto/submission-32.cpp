class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left = 0;
        int right = left+1;
        if(prices.size() < 2) return 0;
        int result = 0;
        while(right < prices.size()){
            int profit = prices[right]-prices[left];
            result = max(profit,result);
            if(prices[right] < prices[left]){
                left = right;
            }
            right++;
        }

        return result;
    }
};
