//
// Created by Surya on 01-04-2023.
//
#include<stdio.h>
int main()
{
    int a[5];
    int b[5] = {0,1,2,3,4};
    a[0] = 5;
    a[1] = 6;
    a[2] = 7;
    a[3] = 8;
    a[4] = 9;
    int i;
    int j;
    for(i=0;i<5;i++)
    {
        printf("%d\t",b[i]);
    }
    printf("\n");
    for(j=4;j>=0;j--)
    {
        printf("%d\t",a[j]);
    }
    return 0;
}