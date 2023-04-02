//
// Created by Surya on 02-04-2023.
//
#include<stdio.h>
#include<stdlib.h>
int * fun(int n)
{
    int *p;
    p = (int *)malloc(sizeof(int));
    return (p);
}

int main()
{
    int *c;
    int i;
    c = fun(5);
    c[0] = 0;
    c[1] = 1;
    c[2] = 2;
    c[3] = 3;
    c[4] = 4;
    for(i = 0; i<5; i++)
    {
        printf("%d\n",c[i]);
    }
    return 0;
}