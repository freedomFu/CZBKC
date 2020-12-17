#include <stdio.h>

int fun(int a, char b)
{
    printf("%d\n", a);
    printf("%c\n", b);

    return 0;
}

int main()
{
    int (*p)(int, char);
    p = &fun;
    (*p)(1,'c');

    return 0;
}