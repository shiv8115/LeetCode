 class MyStack {
private:
    queue<int > q;
public:
    MyStack() {
        
    }
    
    void push(int x) {
        q.push(x);
        int sz = q.size() - 1;
        for(int i = 0; i < sz; ++i){
            q.push(q.front());
            q.pop();
        }
    }
    
    int pop() {
        int first = q.front();
        q.pop();
        
        return first;
    }
    
    int top() {
        return q.front();
    }
    
    bool empty() {
        return q.empty();
    }
};