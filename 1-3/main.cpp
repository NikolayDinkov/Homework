#include <iostream>
#include <stdio.h>

using namespace std;

int a=0;

int fun1()
{
    a++;
    return a;
}
int main()
{
    printf("%d\n", fun1());
    printf("%d\n", fun1());
    printf("%d\n", fun1());
    return 0;
}
