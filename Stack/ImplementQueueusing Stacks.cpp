class MyQueue {
public:
     stack<int> s1;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
        
    }
    
    int pop() {
        stack<int> s2;
        int ans;
        while(!s1.empty()) {
            int val=s1.top();
            s1.pop();
            if(s1.empty()){
                ans = val;
                break;
            }
            s2.push(val);
        }

        while(!s2.empty()) {
            int val=s2.top();
            s2.pop();
            s1.push(val);
        }
      return  ans;


        
    }
    
    int peek() {
        stack<int> s2;
        int ans;
        while(!s1.empty()) {
            int val=s1.top();
            s1.pop();
            if(s1.empty()){
                ans = val;
                
            }
            s2.push(val);
        }

        while(!s2.empty()) {
            int val=s2.top();
            s2.pop();
            s1.push(val);
        }
      return  ans;
        
    }
    
    bool empty() {
        return s1.empty();
        
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */