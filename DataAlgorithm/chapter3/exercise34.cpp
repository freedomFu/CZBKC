#include <iostream>
#include <iterator>
#include <fstream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    ifstream in_file("input_int.txt");
    ofstream odd_file("output_odd.txt");
    ofstream even_file("output_even.txt");

    if(!in_file || !odd_file || !even_file)
    {
        cerr << "!! unable to open the necessary files." << endl;
        return -1;
    }

    istream_iterator<int> is(in_file);
    istream_iterator<int> eof;

    vector<int> numbers;
    copy(is, eof, back_inserter(numbers));
    vector<int>::iterator vit = numbers.begin();

    vector<int> odd_vec, even_vec;
    while(vit!=numbers.end())
    {
        if(*vit % 2 == 0)
        {
            even_vec.push_back(*vit);
        }
        else
        {
            odd_vec.push_back(*vit);
        }
        vit++;
    }

    ostream_iterator<int> odd_os(odd_file, " ");
    ostream_iterator<int> even_os(even_file, "\n");
    copy(odd_vec.begin(), odd_vec.end(), odd_os);
    copy(even_vec.begin(), even_vec.end(), even_os);

    return 0;
}