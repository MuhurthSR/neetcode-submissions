class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        vector<int> charIndex(26,0);
        vector<int> windowIndex(26,0);

        for(auto& ch : s1){
            charIndex[ch - 'a']++;
        }
        int left = 0;
        int right = 0;
        while(right < s2.length()){
            windowIndex[s2[right]-'a']++;

            if((right-left)+1 > s1.length()){
                windowIndex[s2[left]-'a']--;
                left++;
            }
            if(charIndex == windowIndex){
                return true;
            }
            
            right++;
            
        }

        return false;
    }
};
