class Solution {
public:
    bool isValid(string s) {
        vector<char> stack;
        int top = -1;
        for(auto& ch : s){
            if(ch == '{'){
                stack.push_back('}');
                top++;
            }
            else if(ch == '('){
                stack.push_back(')');
                top++;
            }
            else if(ch == '['){
                stack.push_back(']');
                top++;
            }
            else{
                if(top == -1 || stack[top] != ch){
                    return false;
                }
                stack.pop_back();
                top--;
            }
        }

        if(top ==-1){
            return true;
        }

        return false;
    }
};
