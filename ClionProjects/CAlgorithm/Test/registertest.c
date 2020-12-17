//
// Created by mac on 2020/11/28.
//
#include <stdio.h>
#include <time.h>

int registertest();
int withouttest();

int main()
{
    void *a;
    registertest();

    withouttest();
}

int registertest()
{
    clock_t start, finish;
    double time;
    start = clock();

    register int temp, i;
    for(i=0;i<30000;i++);
    for(temp=0;temp<=100;temp++);
    finish=clock();
    time = (double)(finish-start);

    printf("使用register花费时间:%lf\n", time);
    return 0;
}

int withouttest()
{
    clock_t start, finish;
    double time;
    start = clock();

    int temp, i;
    for(i=0;i<30000;i++);
    for(temp=0;temp<=100;temp++);
    finish=clock();
    time = (double)(finish-start);

    printf("不使用register花费时间:%lf\n", time);
    return 0;
}

