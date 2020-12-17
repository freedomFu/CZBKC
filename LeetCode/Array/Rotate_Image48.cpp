#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void rotate(vector<vector<int> >& matrix) {
        // 以左上角为基准
        int n = matrix.size();
        // 真正去循环的量
        int _n = (n%2==0) ? (n/2) : (n/2 + 1);
        // 根据奇数还是偶数来判断真正循环的数目
        int flag = (n%2==0) ? 0 : 1;

        for(int i=0;i<_n;i++)
        {
            for(int j=0;j<_n-flag;j++)
            {
                int tmp = matrix[i][j];
                matrix[i][j] = matrix[n-j-1][i];
                matrix[n-j-1][i] = matrix[n-i-1][n-j-1];
                matrix[n-i-1][n-j-1] = matrix[j][n-i-1];
                matrix[j][n-i-1] = tmp;
            }
        }
    }
};

int main()
{
    vector< vector<int> > A;
    vector<int> B;
    B.push_back(1);
    B.push_back(2);
    B.push_back(3);
    B.push_back(4);
    A.push_back(B);
    B.clear();
    B.push_back(5);
    B.push_back(6);
    B.push_back(7);
    B.push_back(8);
    A.push_back(B);
    B.clear();
    B.push_back(9);
    B.push_back(10);
    B.push_back(11);
    B.push_back(12);
    A.push_back(B);
    B.clear();
    B.push_back(13);
    B.push_back(14);
    B.push_back(15);
    B.push_back(16);
    A.push_back(B);
    B.clear();

    Solution s1;
    s1.rotate(A);

    for(int i=0;i<A.size();i++)
    {
        for(int j=0;j<A[0].size();j++)
        {
            cout << A[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}