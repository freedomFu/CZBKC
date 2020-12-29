#include <iostream>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

class LessThan {
public:
    bool operator()(const string & s1, const string & s2)
    {
        return s1.size() < s2.size();
    }
};

int main()
{
    // 读入文件
    ifstream in_file("input_file.txt");
    if(!in_file)
    {
        cerr << "!! unable to open the necessary files. \n";
    }

    istream_iterator<string> is(in_file);
    istream_iterator<string> eof;
    vector<string> text;
    copy(is, eof, back_inserter(text));
    vector<string>::iterator sit_begin = text.begin();
    vector<string>::iterator sit_end = text.end();
    // 相同长度的字串会按照之前的顺序排列
    sort(sit_begin, sit_end, LessThan());

    for(;sit_begin!=sit_end;++sit_begin)
    {
        cout << *sit_begin << "\t";
    }

    cout << endl;

    return 0;
}