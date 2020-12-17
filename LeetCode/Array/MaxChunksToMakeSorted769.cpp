#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxChunksToSorted(vector<int>& arr) {

        if(arr.size() == 0)
        {
            return 0;
        }

        if(arr.size() == 1)
        {
            return 1;
        }

        int num = 0;
        int max = arr[0];
        int size = arr.size();
        for(int i=0;i<size;i++)
        {
            if(i==max)
            {
                num++;
            }
            if(arr[i]>max)
            {
                max = arr[i];
            }
        }
        return num;
    }
};

int main()
{
    int arr[] = {1,0,2,3,4};
    vector<int> varr(arr, arr+5);

    Solution s1;
    int res = s1.maxChunksToSorted(varr);
    cout << res << endl;

    return 0;
}