//
// Created by Surya on 02-04-2023.
//
#include <stdio.h>
int fun1(int a, int b);
int fun2(int a, int b);
int fun3(int a, int b);
int main()
{
    int sum,product,diff;
    sum = fun1(2,1);
    printf("%d\n",sum);
    diff = fun2(2,1);
    printf("%d\n",diff);
    product = fun3(2,1);
    printf("%d\n",product);
    return 0;
}
int fun1(int a, int b)
{
    int c;
    c = a+b;
    //printf("%d",c);
    return c;
}
int fun2(int a, int b)
{
    int c;
    c = a-b;
    //printf("%d",c);
    return c;
}
int fun3(int a, int b)
{
    int c;
    c = a*b;
    //printf("%d",c);
    return c;
}