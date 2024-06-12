#include<stdio.h>

int main(){
    float temp_fahrenit, temp_celcius;
    clrscr();
    printf("Enter Temp In Fahrenit:");
    scanf("%f", &temp_fahrenit);

    temp_celcius = temp_fahrenit - 32 * 5.0/9;

    printf("Tempereture in Celcius = %f", temp_celcius);
    getch();

    return 0;
}