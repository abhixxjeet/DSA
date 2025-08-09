class MinStack {
public:
    stack<int>st;
    stack<int>mi;
    int min;
    MinStack() {
        min=INT_MAX;
    }
    
    void push(int val) {
        st.push(val);
        if(mi.empty() || val<=mi.top()){
            mi.push(val);
        }
    }
    
    void pop() {
        int top=st.top();
        if(st.top()==mi.top()){
            mi.pop();
        }
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return mi.top();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */