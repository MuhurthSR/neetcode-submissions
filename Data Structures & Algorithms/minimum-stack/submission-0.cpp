class MinStack {
private : 
    vector<int> main_stack;
    vector<int> min_stack;
public:
    MinStack() {
        
    }
    
    void push(int val) {
        main_stack.push_back(val);

        if(min_stack.empty() || val <= min_stack.back()){
            min_stack.push_back(val);
        }
    }
    
    void pop() {
        if(main_stack.back() == min_stack.back()){
            min_stack.pop_back();
        }
        main_stack.pop_back();
    }
    
    int top() {
        return main_stack.back();
    }
    
    int getMin() {
        return min_stack.back();
    }
};
