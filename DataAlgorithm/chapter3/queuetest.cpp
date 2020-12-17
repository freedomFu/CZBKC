#include <iostream>
#include <queue>

using namespace std;

int main()
{
    deque<int> a_line;
    int ival;
    int stop = 0;
    while((cin >> ival) && (stop<=10))
    {
        a_line.push_back(ival);
        stop++;
    }

    int curr_value = a_line.front();
    cout << "first:" << curr_value << endl;

    a_line.pop_front();
    curr_value = a_line.front();
    cout << "second:" << curr_value << endl;
    return 0;
}