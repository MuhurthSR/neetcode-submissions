class Solution {
private:
    bool eatingrate(vector<int>& piles,int rate,int time_Limit){
        long long hrs = 0;
        for(auto& num : piles){
            hrs += num/rate;

            if(num % rate != 0){
                hrs++;
            }
        }
        return hrs <= time_Limit;

    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int right = *max_element(piles.begin(),piles.end());
        int left = 1;
        int result = right;
        while(left <= right){
            int mid = left + (right - left)/2;
            if(eatingrate(piles,mid,h)){
                result = min(result,mid);
                right = mid-1;
            }
            else{
                left = mid+1;
            }
        }
        return result;
    }
};
