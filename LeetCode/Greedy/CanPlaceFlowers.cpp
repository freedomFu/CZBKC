#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        // 在数组两头添加0， 这样无需考虑边界问题，这样只要连续出现三个0，就可以在中间种树
        int size = flowerbed.size();
        int res = 0;

        vector<int> tmp;
        tmp.push_back(0);
        for(int i=1;i<size+1;i++)
        {
            tmp.push_back(flowerbed[i-1]);
        }
        tmp.push_back(0);

        for(int i=1;i<size+1;i++)
        {
            if(tmp[i-1] || tmp[i] || tmp[i+1])
            {
                tmp[i] = 1;
                res++;
            }
        }
        if(res >= n)
        {
            return true;
        }
        else
        {
            return false;
        }
        
    }
};

int main()
{
    Solution s1;

    int rat[] = {1,0,0,0,1};

    vector<int> rats(rat, rat+5);

    int n = 1;

    bool res = s1.canPlaceFlowers(rats, n);

    cout << res << endl;
    
}