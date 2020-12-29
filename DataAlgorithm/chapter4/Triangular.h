#include <iostream>
#include <vector>
using namespace std;

class Triangular 
{
public:
    // 一组重载的constructor
    // Triangular(); // 默认的constructor
    // Triangular(int len);
    Triangular(int len = 1, int beg_pos = 1);
    // 定义const member function
    int length() const { return _length; }
    int beg_pos() const { return _beg_pos; }
    // get the element in the right position
    int elem(int pos) const;
    Triangular & copy(const Triangular & rhs);

    // non-const member function
    bool next(int & val) const;
    // 重置 next 的位置
    void next_reset() const {_next = _beg_pos - 1; }

    static bool is_elem(int);
    static void gen_elements(int length);
    static void gen_elems_to_value(int value);
    static void display(int length, int beg_pos, ostream & os = cout);

private:
    string _name;
    int _length; // 元素个数
    int _beg_pos; // 起始位置
    mutable int _next; //下一个迭代目标
    // 这里仍然存在问题
    static vector<int> _elems;
    static int _queue_size; 
    static const int _max_elems = 1024;
    //static vector<int> _elems;
};

Triangular::Triangular(int len, int beg_pos) : _length(len>0 ? len:1), _beg_pos(beg_pos > 0? beg_pos : 1)
{
    _next = _beg_pos-1;
    int elem_cnt = _beg_pos + _length - 1;

    if(_elems.size() < elem_cnt)
    {
        // 生成至指定size
    }

    cout << _queue_size << endl;

}


// Triangular::Triangular(int len, int bp)
// {
//     _length = len>0 ? len : 1;
//     _beg_pos = bp>0 ? bp : 1;

//     // 因为索引从0开始
//     _next = _beg_pos - 1;
// }

// 第二种方法 成员初始化列表
// Triangular::Triangular(const Triangular & rhs) : _length(rhs._length), _beg_pos(rhs._beg_pos), _next(rhs._next)
// {
//     // 函数体是空的
// }
// 用于把参数传给member class object
// Triangular::Triangular(int len, int bp) : _name("Triangular")
// {
//     _length = len > 0 ? len : 1;
//     _beg_pos = bp > 0 ? bp : 1;
//     _next = _beg_pos-1;
// }

