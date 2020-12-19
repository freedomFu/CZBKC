#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;

template <typename InputIterator, typename OutputIterator,
            typename ElemType, typename Comp>
OutputIterator sub_vec0(InputIterator first, InputIterator last, OutputIterator at, const ElemType & val, Comp pred)
{
    OutputIterator at_begin = at;
    // 完成复制操作
    while(first!=last)
    {
        *at++ = *first++;
    }
    OutputIterator at_end = at;
    sort(at_begin, at_end);

    OutputIterator oit = find_if(at_begin, at_end, bind2nd(pred, val));
    return oit;
}

template <typename showIterator>
void display(showIterator first, showIterator last, string title)
{   cout << title << endl << "\t";
    while(first != last)
    {
        cout << *first << "\t";
        ++first;
    }
    cout << endl;
}

int main()
{
    const int elem_size = 7;
    int a[] = {6, 10, 8, 4, 10, 7, 10};
    vector<int> ivec(a, a+elem_size);
    vector<int> ovec(elem_size);
    less<int> lt;
    vector<int>::iterator changeit = sub_vec0(ivec.begin(),ivec.end(), ovec.begin(), elem_size, greater_equal<int>());
    ovec.erase(changeit, ovec.end());
    int vsize = ovec.size();
    display(ovec.begin(), ovec.end(), "ovec的内容为：");
    return 0;
}

