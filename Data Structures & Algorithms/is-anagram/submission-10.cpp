class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        vector<int> sIndex(26,0);
        vector<int> tIndex(26,0);

        for(auto& ch : s){
            sIndex[ch-'a']++;
        }

        for(auto& ch : t){
            tIndex[ch-'a']++;
        }

        return sIndex == tIndex;
    }
};
