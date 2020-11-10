//
// Created by mac on 2020/11/7.
//
#include <stdio.h>
#include <wchar.h>

int main2()
{
    //printf("Delete file (are you really sure??) :\n");
    // 会有声音出现 \a
    wchar_t a = L'\x0123';
    wchar_t b = L'\x100';
    printf("1\40\n");
    printf("2\100\n");
    printf("3\x40\n");
    printf("4%d\n", b);
    printf("5\0123\n");
    printf("6%d\n", a);
    return 0;
}

