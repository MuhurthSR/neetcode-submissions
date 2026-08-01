class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int l = 0;
        int r = 0;
        int max_length = 0;
        vector<int> char_index(128,-1);

        while(r < s.length()){
            l = max(l,char_index[s[r]]+1);

            max_length = max(max_length,r-l+1);

            char_index[s[r]] = r;

            r++;
        }
        return (max_length);
    }
};
