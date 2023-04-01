//
// Created by Surya on 01-04-2023.
//
#include<stdio.h>
#include "Structures_01.h"
int main()
{
    struct complex_num c = {4,6};
    struct student stu = {1,"Surya","CSE","Hyderabad"};
    printf("Complex Number = %i + %ii\n",c.real,c.img);
    printf("Student Info\n");
    printf("Roll No: %d\n",stu.roll_no);
    printf("Name: %s\n",stu.name);
    printf("Department: %s\n",stu.dept);
    printf("Address: %s\n",stu.addr);
    return 0;
}