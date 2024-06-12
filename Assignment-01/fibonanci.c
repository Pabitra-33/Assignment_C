#include<stdio.h>
int main()
{
    int x,y,z,n;
    printf("Enter an integer value:");
    scanf("%d", &n);

    x = 0, y = 1;
    printf("%d%d", x,y);
    n = n-2;
    while (n!=0)
    {
        z = x+y;
        x = y;
        y = z;
        printf("%d", z);
        n--;
    }
    return 0;
    
}