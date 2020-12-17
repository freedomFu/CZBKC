#include <iostream>
#include <vector>
#include <string>

using namespace std;

int max(int a, int b);
double max(double a, double b);
string max(string a, string b);
int max(const vector<int> & a);
double max(const vector<double> & a);
string max(const vector<string> & a);
int max(int a[], int size);
double max(double a[], int size);
string max(string a[], int size);

int main()
{
    int size = 3;
    int a[3] = {1,3,2};
    double b[3] = {1.1,2.2,3.3};
    string c[3] = {"aaa", "bbb", "ccc"};

    vector<int> aa(a, a+3);
    vector<double> bb(b, b+3);
    vector<string> cc(c, c+3);

    cout << max(a[0],a[1]) << endl;
    cout << max(b[0],b[1]) << endl;
    cout << max(c[0],c[1]) << endl;
    cout << max(aa) << endl;
    cout << max(bb) << endl;
    cout << max(cc) << endl;
    cout << max(a,3) << endl;
    cout << max(b,3) << endl;
    cout << max(c,3) << endl;


    return 0;
}

int max(int a, int b)
{
    return (a>b?a:b);
}

double max(double a, double b)
{
    return (a>b?a:b);
}

string max(string a, string b)
{
    return (a>b?a:b);
}

int max(const vector<int> & a)
{
    return *max_element(a.begin(), a.end());
}
double max(const vector<double> & a)
{
    return *max_element(a.begin(), a.end());
}
string max(const vector<string> & a)
{
    return *max_element(a.begin(), a.end());
}
int max(int a[], int size)
{
    return *max_element(a, a+size);
}

double max(double a[], int size)
{
    return *max_element(a, a+size);
}

string max(string a[], int size)
{
    return *max_element(a, a+size);
}