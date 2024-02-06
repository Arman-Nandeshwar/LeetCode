
class MyQueue {
private:
    // stack<int> s1;
    // stack<int> s2;

    stack<int>input;
    stack<int>output;

public:
    MyQueue() {}

    // void push(int x) {
    //     while (!s1.empty()) {
    //         s2.push(s1.top());
    //         s1.pop();
    //     }
    //     s1.push(x);
    //     while (!s2.empty()) {
    //         s1.push(s2.top());
    //         s2.pop();
    //     }
    // }

    // int pop() {
    //     int temp = s1.top();
    //     s1.pop();
    //     return temp;
    // }

    // int peek() {
    //     return s1.top();
    // }

    // bool empty() {
    //     return s1.empty();
    // }

    void push(int x) {
        input.push(x);
    }

    int pop() {
        if(!output.empty()){
            int ele = output.top();
            output.pop();
            return ele;
        }
        else{
            while(!input.empty()){
                output.push(input.top());
                input.pop();
            }
            int ele = output.top();
            output.pop();
            return ele;
        }
    }

    int peek() {
        if(!output.empty()){
            return output.top();
        }
        else{
            while(!input.empty()){
                int ele = input.top();
                input.pop();
                output.push(ele);
            }
            return output.top();
        }
    }

    bool empty() {
        if(input.empty() and output.empty())return true;
        return false;
    }
};

