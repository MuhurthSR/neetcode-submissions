class Solution {
public:
    string minWindow(string s, string t) {
        if(t.length() > s.length()){
            return "";
        }
        int count = 0;
        int l = 0;
        int r = 0;
        int min_start = 0;
        int max_length = INT_MAX;

        vector<int> char_index(128,0);
        for(auto& ch : t){
            char_index[ch]++;
        }

        while(r < s.length()){
            if(char_index[s[r]] > 0){
                count++;
            }

            char_index[s[r]]--;

            while(count == t.length()){
                if(r-l+1 < max_length){
                    max_length = r-l+1;
                    min_start = l;
                }

                char_index[s[l]]++;

                if(char_index[s[l]] > 0){
                    count--;
                }

                l++;
            }
            r++;
        }

        if (max_length == INT_MAX) {
            return "";
        }
        return s.substr(min_start, max_length);

    }
};
