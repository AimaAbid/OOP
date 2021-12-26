// to fnd area of triangle when 3 sides are given
// area=under root of (s-a)(s-b)(s-c)
// where s=(a+b+c)/2
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,sp;
    printf("Enter the three sides of triangle");
    scanf("%f%f%f",&a,&b,&c);

    sp=(a+b+c)/2.0;
    printf("The area of triangle is %f",sqrt(sp*(sp-a)*(sp-b)*(sp-c)));

    return 0;
}