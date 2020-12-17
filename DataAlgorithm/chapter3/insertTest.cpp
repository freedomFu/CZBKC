#include <iostream>
#include <list>

using namespace std;

int main()
{
    // int a[] = {1,2,3,6,7,8,20,30,50};
    // list<int> ilist(a, a+9);
    // int ival = 18;

    // list<int>::iterator it = ilist.begin();
    // while(it!=ilist.end())
    // {
    //     if(*it >= ival)
    //     {
    //         ilist.insert(it, ival);
    //         break;
    //     }
    //     ++it;
    // }
    // if(it==ilist.end())
    // {
    //     ilist.push_back(ival);
    // }

    // it = ilist.begin();
    // do
    // {
    //     cout << *it << "\t";
    //     it++;
    // } while (it!=ilist.end());
    // cout << endl;

    // string sval("Part two");
    // string b[] = {
    //     "aaaaa",
    //     "bbbbb",
    //     "ccccc",
    //     "Part two",
    //     "ddddd"
    // };
    // list<string> slist(b, b+5);

    // list<string>::iterator its = find(slist.begin(), slist.end(), sval);

    // slist.insert(its, 8, string("dummy"));

    // its = slist.begin();
    // do
    // {
    //     cout << *its << "\t";
    //     its++;
    // } while (its!=slist.end());
    // cout << endl;

    // cout << "------------------------------" << endl;
    int ia1[7] = {1, 1, 2, 3, 5, 55, 89};
    int ia2[4] = {8, 13, 21, 34};
    list<int> elems(ia1, ia1+7);
    list<int>::iterator itss = find(elems.begin(), elems.end(), 55);

    elems.insert(itss, ia2, ia2+4);

    list<int>::iterator first = find(elems.begin(), elems.end(), 8);
    list<int>::iterator last = find(elems.begin(), elems.end(), 21);
    elems.erase(first, last);

    itss = elems.begin();
    do
    {
        cout << *itss << "\t";
        itss++;
    } while (itss!=elems.end());
    cout << endl;

    


}