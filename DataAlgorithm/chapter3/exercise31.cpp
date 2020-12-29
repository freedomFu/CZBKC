#include <iostream>
#include <map>
#include <set>
#include <string>
#include <fstream>
#include <iterator>
#include <vector>

using namespace std;

int main()
{

    // 定义map
    map<string, int> words;
    
    // 读入文件
    ifstream in_file("input_file.txt");
    if(!in_file)
    {
        cerr << "!! unable to open the necessary files. \n";
    }
    // 定义set
    string excludeStr[] = {"a", "an", "or", "the", "and", "but", "but"};
    set<string> sset(excludeStr, excludeStr+6);

    istream_iterator<string> is(in_file);
    istream_iterator<string> eof;
    vector<string> text;
    copy(is, eof, back_inserter(text));
    
    vector<string>::iterator sit = text.begin();
    for(;sit!=text.end();++sit)
    {
        string tmp = *sit;
        if(sset.count(tmp))
        {
            continue;
        }

        words[tmp]++;
    }
    map<string, int>::iterator strit = words.begin();

    string is_show;
    cout << "你想查询某个字符是否出现过吗？(y)";
    cin >> is_show;
    if(is_show == "y" || is_show == "Y")
    {
        string sword;
        cout << "请输入查询字符：";
        cin >> sword;
        if(words.count(sword))
        {
            cout << "出现次数为：" << words.count(sword) << endl;
        }
        else
        {
            cout << "这个字符没有出现过！" << endl;
        }
    }
    
    cout << "map中显示的值为：" << endl;
    for(;strit!=words.end();++strit)
    {
        cout << "key: " << strit->first << "\t"
        << "value: " << strit->second << endl;
    }

    return 0;
}