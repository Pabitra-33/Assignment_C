#include<stdio.h>

int main(){
    int n, i,j;
    printf("Enter an integer value to which you want this pattern print:");
    scanf("%d", &n);

    for(i =0; i<= n-1; i++){
        for(j = 0; j<=i; j++){
            printf(" *\t");
        }
        printf(" \n ");
    }
    return 0;
}