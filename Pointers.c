//
// Created by Surya on 01-04-2023.
//
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 10;
    int i;
    int *p;
    p = (int *)malloc(5*sizeof(int));
    p[0] = 0;
    p[1] = 1;
    p[2] = 2;
    p[3] = 3;
    p[4] = 4;
    printf("%d\n",a);
    for(i=0;i<5;i++) {
        printf("%d\n", p[i]);
    }
    free(p);
    return 0;
}