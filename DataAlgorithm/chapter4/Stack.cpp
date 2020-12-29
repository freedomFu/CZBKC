#include "Stack.h"

void fill_stack(Stack & stack, istream & is = cin)
{
    string str;
    while(is >> str && !stack.full())
    {
        stack.push(str);
    }
    cout << "Read in " << stack.size() << " elements\n";
}

bool Stack::find(string & value)
{
    vector<string>::iterator stackit = _stack.begin();
    while(stackit!=_stack.end())
    {
        if(*stackit == value)
        {
            stackit++;
            return true;
        }
    }
    return false;
}

int Stack::count(string & value)
{
    vector<string>::iterator stackit = _stack.begin();
    int count = 0;
    while(stackit!=_stack.end())
    {
        if(*stackit == value) 
        {
            stackit++;
            count++;
        }
    }
    return count;
}

bool Stack::pop(string & elem)
{
    if(empty())
    {
        return false;
    }
    elem = _stack.back();
    _stack.pop_back();
    return true;
}

bool Stack::peek(string & elem)
{
    if(empty())
    {
        return false;
    }
    elem = _stack.back();
    return true;
}

bool Stack::push(const string & elem)
{
    if(full())
    {
        cout << "不能再添加元素了" << endl;
        return false;
    }
    _stack.push_back(elem);
    return true;
}

int main()
{
    Stack s;
    fill_stack(s);
    // string pops;
    // s.peek(pops);
    // cout << s.size() << endl;
    // s.push(pops);
    // cout << s.push(pops) << endl;
    // cout << s.size() << endl;
    string finds = "aaa";
    //cout << s.find(finds) << endl;
    cout << s.count(finds) << endl;

}