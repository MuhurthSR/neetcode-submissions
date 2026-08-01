class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> char_index(128,-1);
        if(s.length() != t.length()) return false;
        for(auto& ch : s){
            char_index[ch]++;
        }
        for(auto& ch : t){
            if(char_index[ch] > -1){
                char_index[ch]--;
            }
            else{
                return false;
            }
        }
        return true;

    }
};
