#include<stdio.h>

int main()
{
    int n, i,j;
    printf("Enter an integer value:");
    scanf("%d",&n);

    for (i = n; i>=1; i--)
    {
        for (j =  i = 0; j >=1; j--)
        {
            print("%d \t", j);
        }
        printf(" \n ");
    }
    return 0;
}