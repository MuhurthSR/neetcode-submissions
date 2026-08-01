class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() == t.length()){
            int charInt[256] = {0};

            for(auto ch : s){
                charInt[ch]++;
            }

            for(auto ch : t){
                if(charInt[ch] > 0){
                    charInt[ch]--;
                }
                else{
                    return false;
                }
            }

            return true;
        }
        return false;
    }
};
