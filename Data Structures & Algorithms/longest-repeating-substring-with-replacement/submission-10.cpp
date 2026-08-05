class Solution {
public:
    int characterReplacement(string s, int k) {
        int count[26] = {0};
        
        int max_frequency = 0;
        int max_length = 0;
        int left = 0;

        for(int right = 0;right < s.length();right++){

            count[s[right]-'A']++;

            max_frequency = max(max_frequency,count[s[right]-'A']);

            while((right-left+1)-max_frequency > k){
                count[s[left]-'A']--;
                left++;
            }

            max_length = max(max_length,right - left + 1);
        }
        return max_length;
    }
};
