/*
Program(2)-Write a program to make use of basic I/O functions using different data types
Solution(2)-User Define Value
*/

#include<stdio.h>
int main()
{
    int rollnum;
    float per;
    char grade;

    printf("\n Enter Student Roll Number:");
    scanf("%d",& rollnum);
    printf("\n Enter Student Percentage:");
    scanf("%f",& per);
    printf("\n Enter Student Grade:");
    scanf("%c",& grade);
    printf("-----Student Information-----\n");
    printf("\n Roll Number:%d",rollnum);
    printf("\n Percentage:%f",per);
    printf("\n Grade:%c",grade);
}