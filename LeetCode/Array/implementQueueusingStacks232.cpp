#include <iostream>
#include <stack>

using namespace std;

class MyQueue {
    stack<int> in ,out;
public:
    /** Initialize your data structure here. */
    MyQueue() {

    }
    
    /** Push element x to the back of queue. */
    void push(int x) {
        in.push(x);
    }
    
    /** Removes the element from in front of queue and returns that element. */
    int pop() {
        in2out();
        int x = out.top();
        out.pop();
        return x;
    }
    
    /** Get the front element. */
    int peek() {
        in2out();
        return out.top();
    }
    /** Get the stack in to stack out */
    void in2out()
    {
        if(out.empty())
        {
            while(!in.empty())
            {
                int x = in.top();
                in.pop();
                out.push(x);
            }
        }
    }
    
    /** Returns whether the queue is empty. */
    bool empty() {
        return in.empty() && out.empty();
    }
};