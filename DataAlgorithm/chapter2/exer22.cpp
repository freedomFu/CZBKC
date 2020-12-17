#include <iostream>
#include <vector>
#include <string>

using namespace std;

bool getPenSeq(vector<int> &, int);

void displayPenSeq(const vector<int> &, const string & , ostream & os=cout);

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