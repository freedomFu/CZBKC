#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    bool lemonadeChange(vector<int>& bills) {
        int size = bills.size();
        int five=0, ten=0;
        int flag = 0;
        vector<int> change;

        for(int ix=0;ix<size;ix++)
        {
            if(bills[ix] == 20)
            {
                if(ten>=1 && five>=1)
                {
                    ten--;
                    five--;
                }
                else if (five >= 3)
                {
                    five -= 3;
                }
                else
                {
                    flag = -1;
                    break;
                }
            }
            else if(bills[ix] == 10)
            {
                if(five>1)
                {
                    five--;
                    ten++;
                }
                else
                {
                    flag = -1;
                    break;
                }
            }
            else
            {
                five++;
            }
        }
        if(flag < 0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
};

int main()
{
    Solution s1;

    int arr[] = {5,5,5,5,20,10,20,5,5,5,5,20,5,5,10,20,20,5,5,5};
    vector<int> varr(arr, arr+20);

    bool res = s1.lemonadeChange(varr);

    cout << res << endl;

    return 0;
}