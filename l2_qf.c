//wind chill factor
#include<stdio.h>
#include<math.h>
int main()

{
    float a,v,t,wcf;
    printf("Enter wind velocity and temperature");
    scanf("%f%f",&v,&t);
    a=pow(v,0.16);
    wcf=35.74+0.6215*t+(0.4275*t-35.75)*a;
    printf("the wind chill factor is %f",wcf);

    return 0;
}