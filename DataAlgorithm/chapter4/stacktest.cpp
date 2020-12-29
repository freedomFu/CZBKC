#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack;

int main()
{
    return 0;
}

void fill_stack(Stack & stack, istream & is = cin)
{
    string str;
    while(is >> str && !stack.full())
    {
        stack.push(str);
    }
    cout << "Read in " << stack.size() << "elements\n";
}

class Stack
{
public:
    // 任何操作函数如果执行成功，就返回true
    // pop 和 peek 会将字符串内容置于elem内
    bool push(const string &);
    bool pop(string & elem);
    bool peek(string & elem);

    bool empty();
    bool full();

    // size()定义于class本身中
    // 其他member则仅仅只是声明
    int size()
    {
        return _stack.size();
    }

private:
    vector<string> _stack;
};

inline bool Stack::empty()
{
    return _stack.empty();
}

