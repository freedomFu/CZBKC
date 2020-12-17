#include <vector>
#include <fstream>

using namespace std;

void display(const vector<int> & vec);
void swap(int & val1, int & val2, ofstream* ofil=0);
void bubble_sort(vector<int> & vec, ofstream* ofil=0);
