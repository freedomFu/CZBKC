#include <algorithm>
#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:

    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());
        // 孩子的数目
        int gindex = 0;
        // 饼干的数目
        int sindex = 0;

        while((gindex < g.size()) && (sindex < s.size()))
        {
            if(g[gindex] <= s[sindex])
            {
                gindex++;
            }
            sindex++;
        }
        return gindex;
    }
};

int main()
{
    Solution s1;

    int garr[] = {1,2,3};
    int sarr[] = {2,2};

    vector<int> g(garr, garr+3);
    vector<int> s(sarr, sarr+2);

    int res = s1.findContentChildren(g, s);

    cout << res << endl;
}