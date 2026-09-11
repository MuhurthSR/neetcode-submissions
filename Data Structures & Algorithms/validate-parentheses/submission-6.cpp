class Solution {
public:
    bool isValid(string s) {
        vector<char> valid_stack;
        for(auto& ch : s){
            if( ch == '(' || ch =='{' || ch =='['){
                valid_stack.push_back(ch);
            }
            else if(!valid_stack.empty()){
                if(ch == ')' && valid_stack.back() == '('){
                    valid_stack.pop_back();
                }
                else if(ch == '}' && valid_stack.back() == '{'){
                    valid_stack.pop_back();
                }
                else if(ch == ']' && valid_stack.back() == '['){
                    valid_stack.pop_back();
                }
                else{
                    return false;
                }
            }
            else{
                return false;
            }
        }
        if(valid_stack.empty()){
            return true;
        }
        return false;
    }
};
