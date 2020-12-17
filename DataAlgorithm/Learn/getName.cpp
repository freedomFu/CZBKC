#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{

    const int seq_size = 9;

    int elem_vals[seq_size] = {
        1,2,3,4,5,6,7,8,9
    };

    vector<int> elem_seq(elem_vals, elem_vals+seq_size);

    const double pi = 3.141592678;

    //pi = 32323.3232;

    string first_name, last_name;
    int tries = 1;

    switch(tries)
    {
        case 1:
            cout << "dsada" << endl;
            break;
        
        case 2:
            cout << "2" << endl;
            break;

        default:
            cout << "default" << endl;
            break;
    }

    cout << tries++ << endl;

    cout << ++tries << endl;

    cout << "Please enter your first name and last name here:";
    cin >> first_name >> last_name;
    cout << '\n';
    cout << "Hello, " << last_name << " " << first_name << " ... and goodbye" << endl;

    return 0;
}