//
// Created by Surya on 02-04-2023.
//
#include<stdio.h>
void fun(int A[],int n)
{
    int i;
    for (i=0;i<n;i++)
    {
        printf("%d\n",A[i]);
    }
}
int main()
{
    int A[5] = {0,1,2,3,4};
    fun(A,5);
    return 0;
}