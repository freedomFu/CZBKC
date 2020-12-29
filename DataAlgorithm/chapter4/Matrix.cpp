#include "Matrix.h"

int main()
{
    Matrix mat(4, 4);

    // 这样会两次调用desctructor这个元素，删除一次之后，再次清空就会导致出错
    // 然而编译并不会出错
    Matrix mat2 (mat);

    return 0;
}