#include <iostream>
/*** C++ format ***/
#include <string>
/*** C++ format ***/

/*** C format ***/
#include <cstring>
#include <iomanip>
/*** C format ***/
using namespace std;

int main()
{
    // 分配一个大小固定的空间，还需要一个字符空间来存储null字符用于标识字符串的结束。
    const int nm_size = 128;
    char user_name[nm_size];
    cout << "Please enter your name:";
    cin >> setw(nm_size) >> user_name;

    switch (strlen(user_name))
    {
    case 0:
        cout << "Oh my god! A person without a name?" << endl;
        break;

    case 1:
        cout << "A one-character name person? Have read Kafuka?" << endl;
        break;

    case 2:
        cout << "Maybe a little more longer?" << endl;
        break;

    case 127:
        cout << "This maybe be too long, can you shorter it a little more" << endl;
        break;
    
    default:
        cout << "A perfect name!" << endl;
        break;
    }
}

int main1()
{
    string user_name;

    cout << "Please enter your name: ";
    cin >> user_name;

    switch(user_name.size())
    {
        // 这个不是很好实现，0个字符长度，但是也有其他办法可以提交
        case 0:
            cout << "Oh my god! A person without a name?" << endl;
            break;

        case 1:
            cout << "A one-character name person? Have read Kafuka?" << endl;
            break;

        case 2:
            cout << "Maybe a little more longer?" << endl;
            break;

        default:
            cout << "A perfect name!" << endl;
            break;
    }

    return 0;
}