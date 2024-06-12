#include<stdio.h>

int main(){
    char name[30];
    printf("Enter Your Name:");
    gets(name);

    printf("Your Name is:");
    puts(name);

    return 0;
}