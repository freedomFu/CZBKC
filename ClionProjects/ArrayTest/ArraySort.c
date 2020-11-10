#include <stdio.h>

void printArray(int a[], int len);
void sortArray(int a[], int len);
int mai2n()
{
    int a[]={33, 2, 55, 66, 0};
    int len=sizeof(a)/sizeof(a[0]);
    printf("初始顺序为：\n");
    printArray(a, len);

    // sort
    sortArray(a, len);
    printf("排序后顺序为：\n");
    printArray(a, len);

    return 0;
}

/**
 * 输出数组元素
 * @param a 数组做函数参数，退化问题，作为形式参数，会退化成函数指针 正确的做法是把数组的内存首地址和数组有效长度传给被调用函数
 * @param len
 */
void printArray(int *a, int len)
{
    int i=0;

    int num = 0;
    num = sizeof(a);
    // 实参的a和形参的a数据类型是不一样的
    // 形参中的数组，会把它作为指针来看待
    for(i=0;i<len;i++)
    {
        printf("%d\t", a[i]);
    }
    printf("\n%d---\n", num);
}

void sortArray(int *a, int len)
{
    int i=0, tmp=0;
    for(i=0;i<len;i++)
    {
        for(int j=i+1;j<len;j++)
        {
            if(a[i]<a[j])
            {
                tmp = a[i];
                a[i] = a[j];
                a[j] = tmp;
            }
        }
    }
}