#include <iostream>
#include <vector>

using namespace std;

// vector
int main1()
{
    vector<int> inNums;

    int num, i = 0;
    
    while(cin >> num)
    {
        inNums.push_back(num);
        i++;
        if (i > 5){
            break;
        }
    }

    // 遍历vector数组
    int size = inNums.size();
    int sum = 0;
    for(int i=0;i<size;i++)
    {
        sum += inNums[i];
    }

    int averge = sum / size;

    cout << "Sum of " << size
        << " elements: " << sum
        << ". Average: " << averge << endl;

    return 0;
}

// array
int main()
{
    const int array_size = 128;
    int inarray[array_size];
    int invalue, incount = 0;
    int sum = 0, ii = 0;

    while(cin >> invalue && incount < array_size)
    {
        inarray[incount++] = invalue;
        ii++;
        if (ii > 5){
            break;
        }
    }

    for(int i=0;i<incount;i++)
    {
        sum += inarray[i];
    }

    int average = sum / incount;

    cout << "Sum of " << incount
        << " elements: " << sum
        << ". Average: " << average << endl;

    return 0;
}