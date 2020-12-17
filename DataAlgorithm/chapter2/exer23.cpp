#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool getPenSeq(vector<int> &, int);

void displayPenSeq(const vector<int> &, const string & , ostream & os=cout);

// extern 表明已经在别的地方定义，这个地方用于声明，可以让其他文件来调用
extern void really_calc_elems(vector<int> & , int);

inline bool calc_elems(vector<int> &vec, int pos)
{
    if(pos<=0 || pos>64)
    {
        cerr << "Sorry. Invalid position: " << pos << endl;
        return false;
    }

    if(vec.size() < pos)
    {
        really_calc_elems(vec, pos);
    }

    return true;
}

int main()
{
    const string title("Pentagonal Numeric Series");

    vector<int> myseq;

    if(getPenSeq(myseq, 0))
    {
        displayPenSeq(myseq, title);
    }

    if(getPenSeq(myseq, 8))
    {
        displayPenSeq(myseq, title);
    }

    if(getPenSeq(myseq, 16))
    {
        displayPenSeq(myseq, title);
    }

    if(getPenSeq(myseq, 128))
    {
        displayPenSeq(myseq, title);
    }

    return 0;
}

bool getPenSeq(vector<int> & seq, int size)
{
    if(size <=0 || size > 64)
    {
        cerr << "The size of your sequence is improper" << endl;
        return false;
    }

    for(int i=0;i<size;i++)
    {
        int num = i+1;
        int elem = (num*(3*num - 1)) / 2;
        seq.push_back(elem);
    }

    return true;
}



void displayPenSeq(const vector<int> & seq,const string & type, ostream & os)
{

    os << "\t" << type << "\t\n";

    for(int i=0;i<seq.size();i++)
    {
        cout << seq[i] << "\t";
    }
    cout << endl;
}

void really_calc_elems(vector<int> & vec, int pos)
{
    for(int ix=vec.size()+1;ix <= pos; ++ix)
    {
        vec.push_back((ix*(3*ix-1))/2);
    }
}