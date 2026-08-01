class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price = INT_MAX;
        int max_profit = 0;

        for(auto price : prices){
            min_price = min(min_price,price);

            max_profit = max((price - min_price),max_profit);
        }
        return max_profit;
    }
};
