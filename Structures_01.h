//
// Created by Surya on 01-04-2023.
//
#include <stdio.h>
#ifndef DSAINC_01_STRUCTURES_01_H
#define DSAINC_01_STRUCTURES_01_H
struct rectangle
{
    int len;
    int brt;
};
struct complex_num
{
    int real;
    int img;
};
struct student
{
    int roll_no;
    char name[25];
    char dept[10];
    char addr[50];
};
struct card
{
    int face;
    int shape;
    int color;
};
#endif //DSAINC_01_STRUCTURES_01_H
