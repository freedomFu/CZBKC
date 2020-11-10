//
// Created by mac on 2020/11/8.
//
#include <stdlib.h>
#include <stdio.h>
#include "increment.h"
#include "negate.h"

int main32()
{
    int test1 = 100, test2 = 200;
    int res1,res2 = 0;

    printf("1:%d\n", increment(test1));
    printf("2:%d\n", increment(test2));
    printf("1:%d\n", negate(test1));
    printf("1:%d\n", negate(test2));
}


