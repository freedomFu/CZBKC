#include <iostream>
#include <vector>
#include <string>

using namespace std;

template <typename type>
type max1(type a, type b)
{
    return (a>b?a:b);
}

template <typename elemType>
elemType max(const vector<elemType> & a)
{
    return *max_element(a.begin(), a.end());
}

template <typename arrType>
arrType max(arrType *a, int size)
{
    return *max_element(a, a+size);
}

int main()
{
    int size = 3;
    int a[3] = {1,3,2};
    double b[3] = {1.1,2.2,3.3};
    string c[3] = {"aaa", "bbb", "ccc"};

    vector<int> aa(a, a+3);
    vector<double> bb(b, b+3);
    vector<string> cc(c, c+3);

    cout << max1(a[0],a[1]) << endl;
    cout << max1(b[0],b[1]) << endl;
    cout << max1(c[0],c[1]) << endl;
    cout << max(aa) << endl;
    cout << max(bb) << endl;
    cout << max(cc) << endl;
    cout << max(a,3) << endl;
    cout << max(b,3) << endl;
    cout << max(c,3) << endl;


    return 0;
}