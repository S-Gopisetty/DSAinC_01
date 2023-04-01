//
// Created by Surya on 01-04-2023.
//
#include<stdio.h>
#include "Structures_01.h"

int main()
{
    struct card deck[52] = {
            {1,0,0},
            {2,0,0},
            {3,0,0}
            };
    printf("%d %d %d\n",deck[0].face,deck[0].shape,deck[0].color);
    printf("%d %d %d\n",deck[1].face,deck[1].shape,deck[1].color);
    printf("Size of Full Struct %llu\n",sizeof(deck));
    printf("Size of Index 0 of Struct %llu\n",sizeof(deck[0]));
    printf("Size of Single Value of Struct %llu\n",sizeof(deck[0].face));
    return 0;
}