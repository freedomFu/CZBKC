#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector< vector<int> > transpose(vector< vector<int> >& A) {
        vector< vector<int> > B;
        vector<int> C;

        if(A.empty())
        {
            return B;
        }
        
        int rowNums = A.size();
        int colNums = A[0].size();

        for(int i=0;i<colNums;i++)
        {
            for(int j=0;j<rowNums;j++)
            {
                C.push_back(A[j][i]);
            }
            B.push_back(C);
            C.clear();
        }
        return B;
    }
};

int main()
{
    vector< vector<int> > A;
    vector<int> B;
    B.push_back(1);
    B.push_back(2);
    B.push_back(3);
    A.push_back(B);
    B.clear();
    B.push_back(4);
    B.push_back(5);
    B.push_back(6);
    A.push_back(B);
    B.clear();

    Solution s1;
    vector< vector<int> > res =  s1.transpose(A);

    for(int i=0;i<res.size();i++)
    {
        for(int j=0;j<res[0].size();j++)
        {
            cout << res[i][j] << "\t";
        }
        cout << endl;
    }

    return 0;
}