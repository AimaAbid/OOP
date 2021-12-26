// convert degree celcius to farenheit
#include<stdio.h>
int main()
{
    float c,f;
    printf("The temperature in celcius");
    scanf("%f",&c);
    f=(1.8*c)+32;
    printf("the temperature in farenheit is %f",f);
    return 0;
}