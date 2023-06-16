class MinStack {
    stack<int> st;
    stack<int> min_vals;
    //min_vals will have min element in st at its top
public:
    
    void push(int val) {
        if(min_vals.empty() || val<=min_vals.top()) min_vals.push(val);

        st.push(val);
    }
    
    void pop() {
        // if the min element i removed from the stack then it should be removed from min_vals too
        if(st.top()==min_vals.top()) min_vals.pop();
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return min_vals.top();
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