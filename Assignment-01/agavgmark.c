/*
To calculate aggregate and percentage marks.
Author: Pabitra
Date : 01/06/2024
*/
#include<stdio.h>
int main(){
    int s1,s2,s3,s4,s5;
    float ag_mark, per_mark;
    scanf("%d%d%d%d%d",&s1,&s2,&s3,&s4,&s5);
    ag_mark = s1+s2+s3+s4+s5;
    per_mark = (ag_mark/500)*100;
    printf("Aggregate mark = %f", ag_mark);
    printf("Percentage mark = %f", per_mark);
    return 0;
}