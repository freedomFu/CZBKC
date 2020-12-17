//
// Created by mac on 2020/11/29.
//
#include <stdio.h>

char *str = "balaba";
char strs[] = "yingyingying";

int test(int a)
{
    return a;
}

int main()
{
    printf("%d\n",(*test)(1));
    printf("%s\n", str);
    printf("%s\n", strs);
    printf("%s\n", strs);
    printf("%s\n", str);

    return 0;

}

