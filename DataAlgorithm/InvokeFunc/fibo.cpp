#include <iostream>
#include <vector>

using namespace std;

const vector<int>* fibo_seq(int);

int main()
{

    int size =0 ;
    bool moveon = true;

    while(moveon)
    {
        cin >> size;

        vector<int> fibo_seq_my = *fibo_seq(size);

        for(int i=0;i<fibo_seq_my.size();i++)
        {
            cout << fibo_seq_my[i] << "\t";
        }

        cout << endl;

        cout << "Do you want to go on?";

        string flag = "";

        cin >> flag;

        if(flag=="Y" || flag=="y")
        {
            moveon=true;
        }
        else
        {
            moveon=false;
        }   
    }
}

const vector<int>* fibo_seq(int size)
{
    const int max_size = 1024;
    static vector<int> elems;

    if(size<=0 || size>max_size)
    {
        cerr << "fibo_seq(): oops: invalid size: "
        << size << " -- can't fulfill request.\n";

        return 0;
    }

    cout << "the size of elems is " << elems.size() << endl;

    for(int ix=elems.size();ix<size;++ix)
    {

        if(ix==0 || ix==1)
        {
            elems.push_back(1);
        }
        else
        {
            elems.push_back(elems[ix-1]+elems[ix-2]);
        }        
    }

    return &elems;
}