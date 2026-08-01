class Solution {
public:

    string encode(vector<string>& strs) {
        
        string encoded = "";

        for(auto& str : strs){
            encoded += to_string(str.length())  + "#" + str;
        }

        return encoded;
    }

    vector<string> decode(string s) {

        vector<string> sol;
        int i = 0;

        while(i < s.length()){
            int j = i;
            while(s[j] != '#'){
                j++;
            }
            int length = stoi(s.substr(i,j-i));

            i = j+1;

            sol.push_back(s.substr(i,length));

            i+=length;
        }
        return sol;
    }
};
