#include <iostream>
#include <set>
#include <vector>
#include <string>

using namespace std;

int main()
{
    string we[10] = {"the", "a", "an", "this", "that", "these", "those", "he", "she", "I"};
    vector<string> svec(we, we+10);
    set<string> word_exclusion(svec.begin(), svec.end());

    word_exclusion.insert("opps");
    word_exclusion.insert("the");

    set<string>::iterator it = word_exclusion.begin();
    for(;it!=word_exclusion.end();++it)
    {
        cout << *it << "\t";
    }
    cout << endl;

    return 0;
}