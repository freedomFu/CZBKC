#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> res;
        int size = nums.size();

        for(int i=0;i<size;i++)
        {
            // 这里需要给出现的值做一个标记，但是又需要记住原来的值
            // 最简单的方法就是变成相反数
            int pos = abs(nums[i])-1;
            if(nums[pos]>0)
            {
                nums[pos] = -nums[pos];
            }
        }

        for(int j=0;j<size;j++)
        {
            if(nums[j] > 0)
            {
                res.push_back(j+1);
            }
        }

        return res;
    }
};

int main()
{
    Solution s1;
    int arr[] = {4,3,2,7,8,2,3,1};
    vector<int> varr(arr, arr+8);

    vector<int> res = s1.findDisappearedNumbers(varr);

    for(int i=0;i<res.size();i++)
    {
        cout << res[i] << endl;
    }

    return 0;
}