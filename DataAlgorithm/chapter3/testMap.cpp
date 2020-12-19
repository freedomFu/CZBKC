#include <iostream>
#include <map>
#include <string>



using namespace std;

int main()
{
    map<string, int> words;
    words["vermeer"]=100;
    map<string, int>::iterator it = words.begin();

    int count = 0;
    // map<string, int>::iterator itt;

    // itt = words.find("vermeerr");

    // if(itt == words.end())
    // {
    //     cout << "不存在于这里" << endl;
    // }
    // else
    // {
    //     count = itt->second;

    // }

    string search_word("vermeer");
    cout << words.count(search_word) << endl;
    if(words.count(search_word))
    {
        count = words[search_word];
    }

    cout << count << endl;
    

    for(;it!=words.end();++it)
    {
        cout << "key: " << it->first << "\t" << "value: " << it->second << endl;
    }

    return 0;
}