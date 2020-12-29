#include <iostream>
#include <stack>

using namespace std;

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(x);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */

class MinStack {
    stack<int> s, min_s;
public:
    /** initialize your data structure here. */
    MinStack() {
        
    }
    
    void push(int x) {
        s.push(x);
        // 为了把所有最小的元素全部加入到min_s当中，否则会导致弹出最小值的时候出错。
        if(min_s.empty() || min_s.top() >= x)
        {
            min_s.push(x);
        }
    }
    
    void pop() {
        if(!min_s.empty() && (min_s.top() == s.top()))
        {
            min_s.pop();
        }
        s.pop();
    }
    
    int top() {
        return s.top();
    }
    
    int getMin() {
        return min_s.top();
    }
};