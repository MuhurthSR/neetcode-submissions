class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        vector<int> sIndex(128,-1);
        vector<int> tIndex(128,-1);

        for(auto& ch : s){
            sIndex[ch-'a']++;
        }

        for(auto& ch : t){
            tIndex[ch-'a']++;
        }

        if(tIndex == sIndex){
            return true;
        }
        return false;
    }
};
