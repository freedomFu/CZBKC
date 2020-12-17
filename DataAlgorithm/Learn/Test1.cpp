#include <iostream>

using namespace std;

// 函数声明
bool fibon_elem(int, int &);
bool fibon_elem1(int, int*);
void print_sequence(int);
/**
 * 练习 2.1 
 **/
int main()
{
    int pos;
    bool moveon = true;

    while(moveon)
    {
        cout << "Please enter a position: ";
        cin >> pos;

        int elem;
        // elem传递的引用
        if(fibon_elem1(pos, &elem))
        {
            cout << "element # " << pos << " is " << elem << endl;
            print_sequence(pos);
        }
        else
        {
            cout << "Sorry. Could not calculate element # " << pos << endl;
        }

        cout << "Do you want to move on?(Y/N)";
        string sign;
        cin >> sign;
        if(sign == "Y" || sign == "y")
        {
            moveon = true;
        }
        else
        {
            moveon = false;
        }
    }
}

void print_sequence(int pos)
{
    if(pos <= 0 || pos > 1024)
    {
        cerr << "invalid position: " << pos << " -- cannot handle request\n";
        return;
    }

    cout << "The Fibonacci Sequence for " << pos << " positions : \n\t ";

    switch(pos)
    {
        default:
        case 2:
            cout << "1 ";
        case 1:
            cout << "1 ";
            break;
    }

    int elem;
    int n_2 = 1, n_1 = 1;
    for(int ix=3;ix<=pos;++ix)
    {
        elem = n_2 + n_1;
        n_2 = n_1;
        n_1 = elem;

        cout << elem << (!(ix%10)?"\n\t":" ");
    }

    cout << endl;
    return;
}

bool fibon_elem1(int pos, int* elem)
{
    // 检查位置是否合理
    if(pos<=0 || pos>1024)
    {
        *elem=0;
        return false;
    }

    *elem = 1;
    int n_2=1, n_1=1;

    for(int ix=3;ix<=pos;++ix)
    {
        *elem = n_2 + n_1;
        n_2 = n_1;
        n_1 = *elem;
    }

    return true;
}

bool fibon_elem(int pos, int &elem)
{
    // 检查位置是否合理
    if(pos<=0 || pos>1024)
    {
        elem=0;
        return false;
    }

    elem = 1;
    int n_2=1, n_1=1;

    for(int ix=3;ix<=pos;++ix)
    {
        elem = n_2 + n_1;
        n_2 = n_1;
        n_1 = elem;
    }

    return true;
}

