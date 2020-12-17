#include <stdio.h>

int test1(int);

int main(void)
{
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%d\n", a+b);
    return 0;
}

int test1(int x)
{
    return x;
}