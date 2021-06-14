class MinStack {
public:
    /** initialize your data structure here. */
    int *d;
    int pos;
    int *mind;
    MinStack() {
        d = new int[30001];
        mind = new int[30001];
        pos=-1;
    }
    
    void push(int val) {
        if(pos==-1){
            d[++pos]=val;
            mind[pos]=val;
        }
        else{
            if(val<mind[pos]){
                mind[pos+1] = val;
            }
            else{
                mind[pos+1] = mind[pos];
            }
            d[++pos]=val;
        }
    }
    
    void pop() {
        pos--;
    }
    
    int top() {
        return d[pos];
    }
    
    int getMin() {
        return mind[pos];
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