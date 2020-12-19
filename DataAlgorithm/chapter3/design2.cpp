#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
#include <functional>

using namespace std;

/** 第一个版本 返回vector中比10小的数字 vector */
vector<int> less_than_ten( const vector<int> & vec)
{
    vector<int> nvec;
    for(int ix=0;ix<vec.size();++ix)
    {
        if(vec[ix] < 10)
        {
            nvec.push_back(vec[ix]);
        }
    }
    return nvec;
}

/** 第二个版本 返回vector中小于任意指定值的数字 vector */
vector<int> less_than(const vector<int> & vec, int less_than_val)
{
    vector<int> nvec;
    for(int ix=0;ix<vec.size();++ix)
    {
        if(vec[ix]<less_than_val)
        {
            nvec.push_back(vec[ix]);
        }
    }
    return nvec;
}

/** 第三个版本 可以根据传递的规则进行筛选 */
bool less_than(int v1, int v2)
{
    return v1<v2 ? true : false;
}

bool greater_than(int v1, int v2)
{
    return v1>v2 ? true : false;
}

vector<int> filter(const vector<int> & vec, int filter_value, bool (*pred)(int, int))
{
    vector<int> nvec;

    for(int ix=0;ix<vec.size();++ix)
    {
        if(pred(vec[ix], filter_value))
        {
            nvec.push_back(vec[ix]);
        }
    }

    return nvec;
}

/** 第四个版本 使用函数对象来实现 */
vector<int> filter_new(const vector<int> & vec, int val, less<int> & lt)
{
    vector<int> nvec;
    vector<int>::const_iterator iter = vec.begin();

    while((iter = find_if(iter, vec.end(), bind2nd(lt, val))) != vec.end())
    {
        nvec.push_back(*iter);
        iter++;
    }

    return nvec;
}

/** 第五个版本 消除vector类型 */
template <typename InputIterator, typename OutputIterator,
            typename ElemType, typename Comp>
OutputIterator filter(InputIterator first, InputIterator last, 
                    OutputIterator at, const ElemType & val, Comp pred)
{
    while((first = find_if(first, last, bind2nd(pred, val))) != last)
    {
        cout << "found value: " << *first << endl;
        *at++ = *first++;
        // *at = *first;
        // *at++;
        // *first++;
    }
    return at;
}

/** 输出vector 或者任何容器 的内容 */
/** 注意其中last指向的是last后面的一个元素 这样才能完整输出整个数组*/
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

/** 用节省空间的方法 找到一个vector中某个值的数目 */
int count_occurs(const vector<int> & vec, int val)
{
    vector<int>::const_iterator iter = vec.begin();
    int occurs_count = 0;
    // 每当找到一个val之后，就会去寻找到val的下一个位置继续进行查找
    while((iter = find(iter, vec.end(), val)) != vec.end())
    {
        ++occurs_count;
        ++iter;
    }
    return occurs_count;
}

// 不适用template的方法
vector<int> sub_vec(const vector<int> &vec, int val)
{
    vector<int> local_vec(vec);
    sort(local_vec.begin(), local_vec.end());

    vector<int>::iterator iter = find_if(local_vec.begin(),local_vec.end(), bind2nd(greater_equal<int>(), val));

    local_vec.erase(iter, local_vec.end());
    return local_vec;
}

template <typename InputIterator, typename OutputIterator,
            typename ElemType, typename Comp>
OutputIterator sub_vec0(InputIterator first, InputIterator last, OutputIterator at, const ElemType & val, Comp pred)
{
    int i=0;
    OutputIterator vbegin, vend;
    *vbegin = *first;
    while(first!=last)
    {
        *at++ = *first++;
        i++;
    }

    OutputIterator oit = find_if(at, at+i, bind2nd(pred, val));

    return at;
}

int main()
{
    int a[] = {6, 10, 8, 4, 10, 7, 10};
    vector<int> ivec(a, a+7);
    vector<int> ovec;
    less<int> lt;
    vector<int> res = sub_vec0(ivec.begin(),ivec.end(),ovec, 6, greater_equal<int>());
    int vsize = res.size();
    // end() 指向的是最后一个元素的下一个元素
    vector<int>::iterator first = res.begin();
    vector<int>::iterator last = res.end();
    display(res.begin(), res.end(), "res的内容为：");
    return 0;
}

int main1()
{
    const int elem_size = 8;
    int ia[elem_size] = {12, 8 ,43, 0, 6, 21, 3, 7};
    vector<int> ivec(ia, ia+elem_size);

    // 储存结果
    int ia2[elem_size];
    vector<int> ivec2(elem_size);

    cout << "filtering integer array for values less than 8\n";
    filter(ia, ia+elem_size, ia2, elem_size, less<int>());

    cout << "filtering interger vector for values greater than 8\n";
    filter(ivec.begin(), ivec.end(), ivec2.begin(), elem_size, greater<int>());

    return 0;
}