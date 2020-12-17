#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // 左上角右下角逼近查找
    bool searchMatrix(vector<vector<int> >& matrix, int target) {
        if(matrix.size()==0)
        {
            return false;
        }

        int leftbottom = matrix.size()-1;
        int rightop = 0;

        while(rightop<matrix[0].size() && leftbottom>=0)
        {
            if(matrix[leftbottom][rightop]==target)
            {
                return true;
            }
            else if(matrix[leftbottom][rightop] < target)
            {
                rightop++;
            }
            else
            {
                leftbottom--;
            }
        }
        return false;
    }
};

int main()
{
    Solution s1;
    int target = 20;

    vector< vector<int> > A;
    vector<int> B;
    B.push_back(1);
    B.push_back(4);
    B.push_back(7);
    B.push_back(11);
    B.push_back(15);
    A.push_back(B);
    B.clear();
    B.push_back(2);
    B.push_back(5);
    B.push_back(8);
    B.push_back(12);
    B.push_back(19);
    A.push_back(B);
    B.clear();
    B.push_back(3);
    B.push_back(6);
    B.push_back(9);
    B.push_back(16);
    B.push_back(22);
    A.push_back(B);
    B.clear();
    B.push_back(10);
    B.push_back(13);
    B.push_back(14);
    B.push_back(17);
    B.push_back(24);
    A.push_back(B);
    B.clear();

    B.push_back(18);
    B.push_back(21);
    B.push_back(23);
    B.push_back(26);
    B.push_back(30);
    A.push_back(B);
    B.clear();

    bool res = s1.searchMatrix(A, target);

    cout << res << endl;

    return  0;
}