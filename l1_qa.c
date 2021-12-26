//calculate gross salary
#include<stdio.h>
int main()
{
    float bs;
    printf("Enter your basic salary");
    scanf("%f",&bs);

    printf("Gross salary = %f",(bs+(0.4*bs)+0.2*bs));
    return 0;
}