#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> twoSum1(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> res;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(nums[i]+nums[j] == target)
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }

    vector<int> twoSum(vector<int>& nums, int target) {
        int size = nums.size();
        vector<int> res;
        for(int i=0;i<size;i++)
        {
            for(int j=i+1;j<size;j++)
            {
                if(nums[j] == target-nums[i])
                {
                    res.push_back(i);
                    res.push_back(j);
                }
            }
        }
        return res;
    }
};

int main()
{
    int nums[] = {2,7,11,15};
    vector<int> vnums(nums, nums+4);
    int target = 10;

    vector<int> res;

    Solution s1;
    res = s1.twoSum(vnums, target);
    for(int i=0;i<res.size();i++)
    {
        cout << res[i] << endl;
    }
    return 0;
}