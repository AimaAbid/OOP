//trignometric ratios of an angle input by user
#include<stdio.h>
#include<math.h>
int main()
{
    float deg,r,s,c,t;
    printf("Enter the angle");
    scanf("%f",&deg);

    r=(deg*3.14)/180.0;
    t=tan(r);
    s=sin(r);
    c=cos(r);
    printf("The value of sin =%f cos=%f tan=%f \n",s,c,t);
    printf("The value of cosec =%f sec=%f cot=%f",1/s,1/c,1/t);
    
    return 0;
}