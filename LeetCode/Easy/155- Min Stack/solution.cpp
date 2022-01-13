// Runtime: 44 ms, faster than 18.88% of C++ online submissions for Min Stack.
// Memory Usage: 17.8 MB, less than 6.04% of C++ online submissions for Min Stack.

class MinStack {
public:
    int *arr;
    int capacity;
    int element;
    map<int,int>mp;
    MinStack() {
        element=0;
        capacity=30001;
        arr=new int [capacity];
    }
    
    void push(int val) {
        arr[element++]=val;
        mp[val]++;
    }
    
    void pop() {
        mp[arr[--element]]--;
        
    }
    
    int top() {
        return arr[element-1];
    }
    
    int getMin() {
        for(auto&x:mp){
            if(x.second>0)
                return x.first;
        }
        return 0;
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
