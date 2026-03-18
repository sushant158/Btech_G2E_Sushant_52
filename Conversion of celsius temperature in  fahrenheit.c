#include<stdio.h>
int main() {
    float celsius, fahrenheit;
    printf("Enter the temperature in degree celcius:\n");
    scanf("%f",&celsius);
    fahrenheit=32+9*celsius/5;
    printf("The temperature in fahrenheit is :%f",fahrenheit);
    return 0;
}
