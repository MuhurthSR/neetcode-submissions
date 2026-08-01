class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded_string = "";
        for(auto& str : strs){
            int length = str.length();
            encoded_string += to_string(length) + "#" +str;
        }
        return encoded_string;
    }

    vector<string> decode(string s) {
        vector<string> sol;
        int i = 0;
        while (i < s.length()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }
            
            int length = stoi(s.substr(i, j - i));
            i = j + 1;
            
            sol.push_back(s.substr(i, length));
            i += length;
        }
        return sol;
    }
};
