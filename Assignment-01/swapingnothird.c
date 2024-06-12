#include<stdio.h>

int main()
{
    int a,b;//two variable which values we are going to swap
    scanf("%d%d", &a,&b);

    a = a+b;
    b = a-b;
    a = a-b;
    printf("%d%d", a,b);
    
    return 0;

}