class MyStack {
    queue<int>q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int s = q.size()-1;
        for(int i=0;i<s;i++){
            q.push(top());
            q.pop();
        }
    }
    
    int pop() {
        if(q.empty())return -1;
        else{
            int curr = q.front();
            q.pop();
            return curr;
        }
    }
    
    int top() {
        if(q.empty())return -1;
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};

/**
 * Your MyStack object will be instantiated and called as such:
 * MyStack* obj = new MyStack();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->top();
 * bool param_4 = obj->empty();
 */