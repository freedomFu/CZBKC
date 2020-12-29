class LessThan
{
public:
    LessThan( int val) : _val(val) {}
    int comp_val() const {return _val;}     // 读取基值
    void comp_val(int nval) {_val = nval;}  // 基值写入

    bool operator()(int _value) const;
private:
    int _val;
};
// _val是类中的值
inline bool LessThan::operator()(int value) const
{
    return value < _val;
}