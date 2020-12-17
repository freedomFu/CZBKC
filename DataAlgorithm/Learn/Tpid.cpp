#include <typeinfo>
#include <iostream>

typedef int* (*fun) (float, long long*);
typedef fun (*foo) (double, char);
typedef foo (*p) (int **, int *);

int main()
{
    std::cout << typeid(p).name() << std::endl;
    return 0;
}