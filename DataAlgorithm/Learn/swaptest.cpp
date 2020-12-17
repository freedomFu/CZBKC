#include<stdio.h>

void swap(int a, int b){
    int t = a;
    a = b;
    b = t;
}

void swapaddress(int* a, int* b)
{
    int t = *a;
    *a = *b;
    *b = t;
}

void swapref(int &c, int &d)
{
    int t = c;
    c = d;
    d = t;
}

int main()
{
    int a = 1;
    int b = 2;

    swap(a, b);

    printf("swap执行之后：%d\t%d\n", a, b);

    a = 1;
    b = 2;

    swapaddress(&a, &b);

    printf("swapaddress执行之后：%d\t%d\n", a, b);

    a = 1;
    b = 2;

    swapref(a , b);
    printf("swapref执行之后：%d\t%d\n", a, b);

    return 0;
}