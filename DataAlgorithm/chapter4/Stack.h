#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Stack{
public:
    const static int max_size = 5;
    bool push(const string &);
    bool pop(string & elem);
    bool peek(string & elem);
    bool find(string & elem);
    int count(string & elem);
    bool empty();
    bool full();

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

inline bool Stack::full()
{
    return _stack.size() == max_size;
}