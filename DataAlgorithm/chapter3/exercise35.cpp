#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

class even_elem{
public:
    bool operator()(int elem)
    {
        return elem%2 ? false : true;
    }
};

int main()
{
    ifstream in_file("input_int.txt");
    ofstream odd_file("output_odd1.txt");
    ofstream even_file("output_even2.txt");

    if(!in_file || !odd_file || !even_file)
    {
        cerr << "!! unable to open the necessary files." << endl;
        return -1;
    }

    istream_iterator<int> is(in_file);
    istream_iterator<int> eof;

    vector<int> numbers;
    copy(is, eof, back_inserter(numbers));

    vector<int>::iterator division = partition(numbers.begin(), numbers.end(), even_elem());

    ostream_iterator<int> odd_os(odd_file, " ");
    ostream_iterator<int> even_os(even_file, "\n");
    copy(numbers.begin(), division, even_os);
    copy(division, numbers.end(), odd_os);

    return 0;
}