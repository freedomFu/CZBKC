#include <iostream>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

const char* msg_to_usr( int num_tries )
{
    const int rsp_cnt = 5;

    static const char* usr_msgs[rsp_cnt] = {
        "1",
        "2",
        "3",
        "4",
        "5"
    };

    if(num_tries < 0)
    {
        num_tries = 0;
    }
    else if(num_tries >= rsp_cnt)
    {
        num_tries = rsp_cnt-1;
    }

    return usr_msgs[num_tries];


}

int main()
{
    ifstream in_file("test.txt");
    if(!in_file)
    {
        cerr << "opps! unable to open input file\n" << endl;
        return -1;
    }

    ofstream out_file("test.sort");
    if(!out_file)
    {
        cerr << "opps! unable to open out file\n" << endl;
        return -2;
    }

    string word;
    vector<string> text;
    while(in_file >> word)
    {
        text.push_back(word);
    }

    int ix;
    cout << "unsorted text: \n";

    for(ix = 0;ix < text.size(); ix++)
    {
        cout << text[ix] << " ";
    }

    cout << endl;

    sort(text.begin(), text.end());

    out_file << "sorted text: \n";

    for(ix=0; ix < text.size(); ix++)
    {
        out_file << text[ix] << ' ';
    }

    out_file << endl;

    return 0;
}