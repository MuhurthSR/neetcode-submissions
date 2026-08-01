class Solution {
public:
    bool validPalindrome(string s) {
        int l = 0;
        int r = s.length()-1;
        while(l<r){
            if(s[l] == s[r]){
                l++;
                r--;
            }
            else{
                return (palindrome_check(l,r-1,s)||palindrome_check(l+1,r,s));
            }
        }
        return true;
    }

    bool palindrome_check(int a, int b,const string &s){
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