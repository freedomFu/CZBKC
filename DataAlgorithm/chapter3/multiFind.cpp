#include <iostream>
#include <vector>
#include <list>

using namespace std;

template <typename elemType>
elemType* find0(const elemType *array, int size, const elemType &value)
{
    if(!array || size<1)
    {
        return 0;
    }

    for(int ix=0;ix<size;++ix)
    {
        if(array[ix] == value)
        {
            return &array[ix];
        }
    }
    return 0;
}

template <typename elemType>
elemType* find1(const elemType * array, int size, const elemType &value)
{
    if(!array || size<1)
    {
        return 0;
    }

    // ++ array 可以让array指向下一个元素
    for(int ix=0;ix<size;++ix,++array)
    {
        if(*array == value)
        {
            return array;
        }
    }
    return false;
}

template <typename elemType>
elemType* find2(const elemType * first, const elemType * last, const elemType &value)
{
    if(!first || !last)
    {
        return 0;
    }

    for(;first!=last;++first)
    {
        if(*first == value)
        {
            return first;
        }
    }
    return 0;
}

template <typename elemType>
inline elemType * begin(const vector<elemType> &vec)
{
    return vec.empty() ? 0 : &vec[0];
}

template <typename elemType>
void display(const vector<elemType> &vec, ostream &os)
{
    typename vector<elemType>::const_iterator iter = vec.begin();
    typename vector<elemType>::const_iterator end_it = vec.end();

    for(;iter!=end_it;++iter)
    {
        os << *iter << endl;
    }
    os << endl;
}

template <typename IteratorType, typename elemType>
IteratorType findIt(IteratorType first, IteratorType last, const elemType & value)
{
    for(;first!=last;++first)
    {
        if(value==*first)
        {
            return first;
        }
    }
    return last;
}

int main()
{
    int iaa[8] = {1,1,2,3,5,8,13,21};
    double da[6] = {1.5,2.0,2.5,3.0,3.5,4.0};
    string sa[4] = {"pooh", "piglet", "eeyore", "tigger"};

    int *pi = findIt(iaa, iaa+8, iaa[3]);
    double *pd = findIt(da, da+6, da[3]);
    string *ps = findIt(sa, sa+4, sa[3]);

    cout << *pi << endl;
    cout << *pd << endl;
    cout << *ps << endl;

    cout << "--------------------" << endl;

    const int asize = 8;
    int ia[asize] = {1,1,2,3,5,8,13,21};
    // 以这8个元素作为list和vector的初值
    vector<int> ivec(ia, ia+asize);
    list<int> ilist(ia, ia+asize);

    int *pia = find(ia, ia+asize, 1024);
    if(pia!=(ia+asize))
    {
        cout << "array找到了" << endl;
    }
    else
    {
        cout << "array没找到" << endl;
    }

    vector<int>::iterator it;
    it = find(ivec.begin(), ivec.end(), 1024);
    if(it != ivec.end())
    {
        cout << "vector找到了" << endl;
    }
    else
    {
        cout << "vector没找到" << endl;
    }

    list<int>::iterator iter;
    iter = find(ilist.begin(), ilist.end(), 1024);
    if(iter!=ilist.end())
    {
        cout << "list找到了" << endl;
    }
    else
    {
        cout << "list没找到" << endl;
    }
}