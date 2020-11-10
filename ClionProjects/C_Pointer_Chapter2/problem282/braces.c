//
// Created by mac on 2020/11/8.
//
#include <stdlib.h>
#include <stdio.h>

int main1()
{
    int ch;
    int braces;

    braces = 0;

    while((ch=getchar()) != 'c')
    {
        if(ch=='{')
        {
            braces += 1;
        }

        if(ch=='}')
        {
            if(braces==0)
            {
                printf("Extra right brace.\n");
            } else
            {
                braces -= 1;
            }
        }
    }

    if(braces > 0)
    {
        printf("Extra left brace.\n");
    }

    return EXIT_SUCCESS;
}

int main44()
{
    int ch;
    int braces;

    braces = 0;
    // 逐个读取字符
    while((ch = getchar()) != 'c')
    {
        // 如果是{，就进行记录，brace++
        if(ch == '{')
        {
            braces += 1;
        }
        // 如果是}，就需要判断brace的值，如果为0，则是多余的，否则进行减法
        if(ch == '}')
        {
            if(braces == 0)
            {
                printf("extra right brace\n");
            }
            else
            {
                braces -= 1;
            }
        }
    }
    // 最终跳出循环，如果braces 不为0，则是没有配对完全
    if(braces > 0)
    {
        printf("extra left brace\n");
    }

    return EXIT_SUCCESS;
}

