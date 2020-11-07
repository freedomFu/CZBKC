#include <stdio.h>

int main()
{
    int i=0;
    int tmp = 0;
    int a[]={33, 2, 55, 66, 0};
    int len=sizeof(a)/sizeof(a[0]);
    printf("初始顺序为：\n");
    for(i=0;i<len;i++)
    {
        printf("%d\t", a[i]);
    }

    printf("\n");

    // sort
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

    printf("排序后顺序为：\n");
    for(i=0;i<len;i++)     
    {         
        printf("%d\t", a[i]);
    }
    printf("\n");
    return 0;
}