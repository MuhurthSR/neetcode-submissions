class Solution {
public:
    int characterReplacement(string s, int k) {
        
        int res = 0;
        int needed_k = 0;
        vector<int> count(128,0);
        
        int l = 0;
        int r = 0;
        int max_value = 0;
        while(r < s.length()){
            count[s[r]]++;
            max_value = max(count[s[r]],max_value);
            needed_k = ((r-l)+1)-max_value;
            if(needed_k > k){
                count[s[l]]--;
                l++;
                
            }
            res = max(res,r-l+1);
            r++;
        }

        return res;
    }
};
