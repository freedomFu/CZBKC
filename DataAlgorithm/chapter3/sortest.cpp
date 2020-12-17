#include <iostream>
#include <vector>
#include <list>
#include <deque>

using namespace std;

int main()
{
    list<string> slist;
    vector<int> ivec;

    // 值为默认值
    list<int> ilist(1024);
    vector<string> svec(32);

    if(svec[0 ]== "")
    {
        cout << "222" << endl;
    }
    else
    {
        cout << "333" << endl;
    }
    

    cout << svec[0] << endl;

    vector<int> iivec(10,-1);
    list<string> sslist(16, "unassigned");

    int ia[8] = {1,1,2,3,5,8,13,21};
    vector<int> fib(ia, ia+8);

    list<string> ssslist;
    list<string> ssslist2(ssslist);

}