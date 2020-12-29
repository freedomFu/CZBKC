#include "Triangular.h"

vector<int> Triangular::_elems;
int Triangular::_queue_size = 1000;

bool Triangular::is_elem(int value)
{
    if(!_elems.size() || _elems[_elems.size()-1] < value)
    {
        gen_elems_to_value(value);
    }

    vector<int>::iterator found_it;
    vector<int>::iterator end_it = _elems.end();

    found_it = find(_elems.begin(), end_it, value);
    return found_it!=end_it;
}


// 扩展至指定值的位置
void Triangular::gen_elems_to_value(int value)
{
    int ix = _elems.size();
    if(!ix)
    {
        _elems.push_back(1);
        ix = 1;
    }
    while(_elems[ix-1] < value && ix < _max_elems)
    {
        cout << "elems to value: " << ix*(ix+1)/2 << endl;
        ++ix;
        _elems.push_back(ix*(ix+1)/2);
    }
    if(ix==_max_elems)
    {
        cerr << "Triangular Sequence; oops: value too large "
            << value << " -- exceeds max size of "
            << _max_elems << endl;
    }
}

// 扩展至指定长度
void Triangular::gen_elements(int length)
{
    if(length < 0 || length > _max_elems)
    {
        cerr << "error size" << endl;
        return ;
    }
    if(_elems.size() < length)
    {
        int ix = _elems.size() ? _elems.size()+1 : 1;
        for(;ix<=length;++ix)
        {
            _elems.push_back(ix*(ix+1)/2);
        }
    }
}


int Triangular::elem(int pos) const {
    return _elems[pos-1];
}

bool Triangular::next(int & value) const {
    if(_next < _beg_pos + _length - 1)
    {         
        value = _elems[_next++];         
        return true;     
    }
    return false; 
}

Triangular & Triangular::copy(const Triangular & rhs)
{
    // 检查两个对象是否相同
    if(this != &rhs)
    {
        _length = rhs._length;     
        _beg_pos = rhs._beg_pos;     
        _next = rhs._beg_pos-1;
    }
    return *this;
}

// 编译器保证trian在sum()之中不会被改变。
int sum(const Triangular & trian)
{
    int beg_pos = trian.beg_pos();
    int length = trian.length();
    int sum = 0;

    for(int ix=0;ix<length;++ix)
    {
        sum += trian.elem(beg_pos+ix);
    }
    return sum;
}

int sum2( const Triangular & trian )
{
    if(!trian.length())
    {
        return 0;
    }
    int val, sum=0;
    trian.next_reset();
    while(trian.next(val))
    {
        sum += val;
    }

    return sum;
}


int main()
{
    char ch;
    bool more = true;

    while(more)
    {
        cout << "Enter value: ";
        int ival;
        cin >> ival;

        bool is_elem = Triangular::is_elem(ival);

        cout << ival
            << (is_elem ? " is " : " is not ")
            << "an element in the Triangular series.\n"
            << "Another value?(y/n)";

        cin >> ch;
        if(ch=='n' || ch == 'N')
        {
            more = false;
        }
    }

    return 0;
}