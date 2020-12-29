#include <iostream>

using namespace std;

class BigClass{
public:
    BigClass(){}
};

class val_class{
public:
    val_class(const BigClass & v) : _val(v)
    {
    }

    // 提供两个版本
    const BigClass & val() const {
        cout << "const" << endl;
        return _val; 
    }
    BigClass & val() { 
        cout << "non-const" << endl;
        return _val; 
    }
private:
    BigClass _val;
};

void example(const val_class *pbc, val_class & rbc)
{
    pbc->val();
    rbc.val();
}

int main()
{
    BigClass bc;
    const val_class *pbc;
    val_class rbc(bc);

    example(pbc, rbc);

    return 0;
}