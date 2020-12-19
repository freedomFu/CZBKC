#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

bool less_than(int v1, int v2)
{
    return v1 < v2 ? true : false;
}

bool greater_than(int v1, int v2)
{
    return v1>v2 ? true : false;
}

vector<int> filter_ver1(const vector<int> & vec, int filter_value, bool (*pred) (int, int))
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

int count_occurs(const vector<int> & vec, int val)
{
    vector<int>::const_iterator iter = vec.begin();
    int occurs_count = 0;

    while((iter=find(iter, vec.end(), val)) != vec.end())
    {
        ++occurs_count;
        ++iter;
    }
    return occurs_count;
}

int main()
{
    int ia[] = {6, 10, 8, 4, 10, 7, 10};
    const vector<int> ivec(ia, ia+7);
    int target = 10;

    binary_search(ivec.begin(), ivec.end(), target);

    int res = count_occurs(ivec, target);

    cout << res << endl;

    return 0;

}