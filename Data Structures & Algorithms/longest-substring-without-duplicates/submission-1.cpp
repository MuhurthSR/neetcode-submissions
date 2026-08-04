class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int ptr1 = 0;
        int ptr2 = 0;
        int max_length = 0;
        unordered_set<char> track;
        while(ptr2 < s.length()){
            while(track.contains(s[ptr2])){
                track.erase(s[ptr1]);
                ptr1++;
            }
            track.insert(s[ptr2]);
            max_length = max(max_length,(ptr2-ptr1)+1);
            ptr2++;
        }
        return max_length;
    }
};
