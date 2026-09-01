class Solution {

private:
    bool possible(vector<int>& piles,int h,int k){
        long long time_taken = 0;
        for(int pile : piles){
            time_taken += (pile / k) + (pile % k != 0);
        }
        if(time_taken <= h){
            return true;
        }
        return false;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left = 1;
        int right = *max_element(piles.begin(),piles.end());

        int k = INT_MAX;

        while(left <= right){
            int mid = left + (right-left) /2;
            if(possible(piles,h,mid)){
                k = min(k,mid);
                right = mid-1;
            }
            else{
                left = mid + 1;
            }
        }
        return k;
    }
};
