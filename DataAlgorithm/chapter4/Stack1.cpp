#include "Stack1.h"
#include <algorithm>

// 这两个函数使用的都是泛型算法
bool Stack1::find(const string & elem) const 
{
    vector<string>::const_iterator end_it = _stack.end();
    return ::find(_stack.begin(), end_it, elem) != end_it;
}

int Stack1::count(const string & elem) const
{
    return ::count(_stack.begin(), _stack.end(), elem);
}

bool Stack1::pop(string & elem)
{
    if(empty())
    {
        return false;
    }
    elem = _stack.back();
    _stack.pop_back();
    return true;
}

bool Stack1::peek(string & elem)
{
    if(empty())
    {
        return false;
    }
    elem = _stack.back();
    return true;
}

bool Stack1::push(const string & elem)
{
    if(full())
    {
        return false;
    }
    _stack.push_back(elem);
    return true;
}

int  main()
{
    Stack1 st;
    string str;

    int i = 0;

    while(cin >> str && !st.full() && i<=10)
    {
        st.push(str);
        i++;
    }

    if(st.empty())
    {
        cout << "\n" << "Oops: no strings were read -- bailing out\n ";
        return 0;
    }


    st.peek(str);

    if(st.size()==1 && st.empty())
    {
        cout << "\n" << "Oops: no strings were read -- bailing out\n";
        return 0;
    }

    cout << "\n" << "Read in " << st.size() << "strings!\n";

    cout << "what word to search for?";
    cin >> str;

    bool found = st.find(str);
    int count = found ? st.count(str) : 0;

    cout << str << (found?" is ":" isn't ") << "in the stack";
    if(found)
    {
        cout << "It occurs " << count << " times\n";
    }

    cout << "The strings, in reverse order: \n";

    while(st.size())
    {
        if(st.pop(str))
        {
            cout << str << " ";
        }
    }

    cout << "\n" << "There are now " << st.size() 
        << " elements in the stack!\n";

    
    return 0;
}