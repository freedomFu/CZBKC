#include <iostream>
using namespace std;

class Matrix
{
public:
    Matrix(int row, int col) : _row(row), _col(col)
    {
        // 进行资源分配
        _pmat = new double[row*col];
    }

    Matrix(const Matrix & rhs) : _row(rhs._row), _col(rhs._col)
    {
        // 对rhs._pmat所指的数组产生一份完全的副本
        int elem_cnt = _row * _col;
        _pmat = new double[elem_cnt];

        for(int ix=0;ix<elem_cnt;++ix)
        {
            _pmat[ix] = rhs._pmat[ix];
        }
    }

    ~Matrix()
    {
        // desctructor
        delete[] _pmat;
    }

private:
    int _row, _col;
    double * _pmat;
};