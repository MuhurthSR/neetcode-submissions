class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int price = 0;
        int l = 0;
        int max_price = 0;
        int r = l+1;
        while(l<r && r <= prices.size()-1){
            if(prices[l] > prices[r]){
                l = r;
                r = l+1;
            }
            else{
                price = prices[r]-prices[l];
                max_price = max_price > price ? max_price : price;
                r++;
            }
        }
        return max_price;
    }
};
