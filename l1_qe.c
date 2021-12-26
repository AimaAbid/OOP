//calculate area and perimeter of rectangle area and circumference of circle
#include<stdio.h>
int main()
{
    float l,b,a,peri,cir,r;
    printf("Enter the length and breadth of rectangle and radius of circle");
    scanf("%f%f%f",&l,&b,&r);

    a=l*b;
    peri=(l+b)*2;
    cir=2*3.14*r;
    printf("The area of rectangle=%f \n the perimeter =%f \n the circumference of circle=%f ",a,peri,cir);
    return 0;
}