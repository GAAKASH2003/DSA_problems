class MinStack {
public:
 
    stack<int>s;
    MinStack() {
        
    }
    void push(int val) {
        
        s.push(val);
        
    }
    void pop() {
        s.pop();
    }
    int top() {
        return s.top();
    }
    int getMin() {
        stack<int>k=s;
           int val=INT_MAX;
        while(!k.empty()){
        val=min(val,k.top());
            k.pop();
        }
        return val;
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