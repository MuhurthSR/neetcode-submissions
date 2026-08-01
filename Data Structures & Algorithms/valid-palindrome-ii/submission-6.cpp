class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        int count = 0;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
                continue;
            }
            else{
                if(palindrome_check(l+1,r,s)){
                    return true;
                }
                else if(palindrome_check(l,r-1,s)){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        if(count > 1){
            return false;
        }
        else{
            return true;
        }
    }

    bool palindrome_check(int a, int b,string &s){
        int l = a;
        int r = b;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return false;
            }
        }
        return true;
    }
};