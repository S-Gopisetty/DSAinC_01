//
// Created by Surya on 01-04-2023.
//
#include <stdio.h>
struct rectangle
{
    int len;
    int brt;
};
int main()
{
    struct rectangle r= {10,10};
    printf("The Area of Rectangle is %d x %d = %d",r.len,r.brt,r.len*r.brt);
    return 0;
}