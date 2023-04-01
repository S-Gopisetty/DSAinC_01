//
// Created by Surya on 01-04-2023.
//
#include<stdio.h>
int main()
{
    int a,c,i;
    printf("Enter A Number For Table: ");
    scanf("%i",&a);
    for(i=0;i<=10;i++)
    {
        c = a * i;
        printf("%d x %d = %d\n",a,i,c);
    }
    return 0;
}