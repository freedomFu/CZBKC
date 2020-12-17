#include <iostream>
#include "bubble.h"

// ofstream ofil("text_out1");

int main()
{
    ofstream ofil("text_out1");

    int ia[8] = {8,34,3,13,1,21,5,2};
    vector<int> vec(ia, ia+8);

    cout << "vector before sort: ";
    display(vec);

    bubble_sort(vec, &ofil);

    cout << "vector after sort: ";
    display(vec);
}

// const表示并不会更改vec的值
void display(const vector<int> & vec)
{
    for(int ix=0;ix<vec.size();ix++)
    {
        cout << vec[ix] << "\t";
    }
    cout << endl;
}

void swap(int & val1, int & val2, ofstream* ofil)
{
    (*ofil) << "swap( " << val1 << ", " << val2 << " )\n";

    int temp = val1;
    val1 = val2;
    val2 = temp;

    (*ofil) << "after swap(): val1 " << val1 << " val2: " << val2 << " \n";
}
// 从小到大排序
void bubble_sort(vector<int> & vec, ofstream* ofil)
{
    for(int ix=0;ix<vec.size();++ix)
    {
        for(int jx=ix+1;jx<vec.size();++jx)
        {
            if(vec[ix] > vec[jx])
            {
                (*ofil) << "about to call swap!"
                << " ix: " << ix << " jx: " << jx << "\t"
                << " swapping: " << vec[ix]
                << " with " << vec[jx] << endl;
                swap(vec[ix], vec[jx], ofil);
            }
        }
    }
}