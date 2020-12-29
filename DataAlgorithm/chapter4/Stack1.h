#include <vector>
#include <string>
#include <iostream>

using namespace std;

class Stack1{
public:
    // 以下只是声明
    bool push(const string &);
    bool pop(string & elem);
    bool peek(string & elem);
    
    bool find(const string & elem) const;
    int count(const string & elem) const;
    // 也可以直接在类定义的内部进行定义，相当于内联函数。
    // 这里的const，是为了说明，这几个函数不会对stack这个变量造成修改。

    bool empty() const { return _stack.empty(); }
    bool full() const { return _stack.size() == _stack.max_size(); }
    int size() const { return _stack.size(); }
private:
    vector<string> _stack;
};

void fill_stack(Stack1 & stack, istream & is = cin);