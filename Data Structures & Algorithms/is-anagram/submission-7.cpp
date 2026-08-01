class Solution {
public:
    bool isAnagram(string s, string t) {
        
        if(s.length() != t.length()){
            return false;
        }
        
        int charmap[256] = {0}; 

        for(auto ch : s){
            charmap[ch]++;
        }

        for(auto ch : t){
            if(charmap[ch] == 0){
                return false;
            }
            charmap[ch]--;
        }

        return true;
    }
};
