//
// Created by Surya on 02-04-2023.
//
#include<stdio.h>
#include<stdlib.h>
#include "Structures_01.h"
/*
int main()
{
    struct rectangle r = {10,5};
    struct rectangle *p;
    p = &r;
    printf("Case 1: %d\n",p->len);
    printf("Case 2: %d\n",(*p).len);
    return 0;
}
*/
int main()
{
    struct rectangle *p;
    p = (struct rectangle *) malloc(sizeof(struct rectangle));
    p -> len = 10;
    p -> brt = 5;
    printf("Case 1: %d\n",p->len);
    printf("Case 2: %d\n",p->brt);
    return 0;
}