class MinStack {
public:
    stack<int> st;
    stack<int> s2;
    MinStack() {
    }
    
    void push(int val) {
        st.push(val);
        val=min(val,!s2.empty() ? s2.top():val);
        s2.push(val);
    }
    
    void pop() {
        st.pop();
        s2.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return s2.top();
    }
};
