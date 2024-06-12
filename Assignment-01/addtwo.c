/*
To add two numbers
Author: Pabitra
Date : 01/06/2024
*/
#include<stdio.h>
int main(){
    int x , y, z;
    printf("Enter two numbers you want to add:");
    scanf("%d%d",&x,&y);
    z = x + y;
    printf("Sum = %d", z);
    return 0;
}