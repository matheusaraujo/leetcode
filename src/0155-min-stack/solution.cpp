class MinStack {
private:
    vector<int> s;
    int m;
public:
    MinStack() {
        m = INT_MAX;
    }
    
    void push(int val) {
        m = min(m, val);
        s.push_back(val);
    }
    
    void pop() {
        if (s.back() == m) {
            s.pop_back();
            m = INT_MAX;
            for(auto i : s) m = min(m, i);
        } else s.pop_back();
    }
    
    int top() {
        return s.back();
    }
    
    int getMin() {
        return m;
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
