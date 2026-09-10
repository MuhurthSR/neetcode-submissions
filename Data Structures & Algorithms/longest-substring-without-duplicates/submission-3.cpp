class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> tracker;
        int left = 0;
        int right = 0;
        int count = 0;
        while(right < s.length()){
            if(tracker.find(s[right]) != tracker.end()){
                left = max(left, tracker[s[right]] + 1);
            }
            tracker[s[right]] = right;
            count = max(count, right - left + 1);
            right++;
        }
        return count;
    }
};
