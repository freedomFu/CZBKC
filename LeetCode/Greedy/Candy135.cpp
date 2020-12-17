#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int candy(vector<int>& ratings) {

        int size = ratings.size();

        if(size < 2)
        {
            return size;
        }

        // 初始全部初始化为1，从开始到最后，从最后到开始遍历，
        // 循环两次，从左到右，右边大的话就比左边多1，反过来遍历也是
        vector<int> nums(size, 1);
        // 右边比左边大
        for(int i=1;i<size;i++)
        {
            if(ratings[i]>ratings[i-1])
            {
                nums[i] = nums[i-1]+1;
            }
        }
        // 左边比右边大
        for(int j=size-2;j>=0;j--)
        {
            if((ratings[j]>ratings[j+1]) && (nums[j]<=nums[j+1]))
            {
                nums[j] = nums[j+1]+1;
            }
        }

        int sum = 0;
        for(int j=0;j<nums.size();j++)
        {
            cout << nums[j] << endl;
            sum += nums[j];
        }
        return sum;
    }
};

int main()
{
    Solution s1;

    int rat[] = {1,3,2,2,1};

    vector<int> rats(rat, rat+5);

    int res = s1.candy(rats);

    cout << res << endl;
    
}