/**
 * 运算符重载的规则：
 *  不可以引入新的运算符
 *  运算符的操作数的个数不可改变！
 *  运算符的优先级不可以改变
 *  运算符的参数列表中，必须至少有一个参数为class类型
 * 
 *  友元没看明白
 **/ 
class Triangular;
class Triangular_iterator
{
    //friend inline int operator* (const Triangular_iterator & rhs);
public:
    Triangular * tri;
    Triangular_iterator(int index) : _index(index-1){}
    bool operator== (const Triangular_iterator & ) const;
    bool operator!= (const Triangular_iterator & ) const;
    int operator* () const;
    // 返回值为引用，则修改的是对象本身，而不是引用，则是一个复制品。
    Triangular_iterator& operator++(); // 前置 prefix
    Triangular_iterator operator++( int ); // 后置 postfix

private:
    void check_integrity() const;
    // 索引
    int _index;
};

inline bool Triangular_iterator::operator==(const Triangular_iterator & rhs) const
{
    return _index == rhs._index;
}

inline bool Triangular_iterator::operator!=(const Triangular_iterator & rhs) const
{
    return !(*this==rhs);
}

// inline int Triangular_iterator::operator*() const
// {
//     check_integrity();
//     return Triangular::_elems[_index];
// }

// inline void Triangular_iterator::check_integrity() const
// {
//     // 大于最大个数时，抛出异常
//     // 必要时，可以扩展vector的容量
//     if(_index >= Triangular::_elems.size())
//     {
//         Triangular::gen_elements(_index+1);
//     }
// }

// 前置版本
inline Triangular_iterator & Triangular_iterator::operator++()
{
    ++_index;
    check_integrity();
    return *this;
}

// 后置版本 迫于重载规则要求
// 编译器会自动为后置版本产生一个int参数，值为0
inline Triangular_iterator Triangular_iterator::operator++( int )
{
    // 可以返回地址
    Triangular_iterator tmp = *this;
    ++_index;
    check_integrity();
    return tmp;
}




// inline int operator* (const Triangular_iterator & rhs)
// {
//     // 由于不是成员函数，所以不可以访问private成员
//     rhs.check_integrity();
//     return Triangular::_elems[_index];
// }