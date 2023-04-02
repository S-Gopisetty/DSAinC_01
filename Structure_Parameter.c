//
// Created by Surya on 02-04-2023.
//
#include<stdio.h>
#include "Structures_01.h"
int area (struct rectangle r1)
{
    return r1.len * r1.brt;
}
int main()
{
    int c;
    struct rectangle r = {10,20};
    c = area(r);
    printf("\nArea %d",c);
    return 0;
}