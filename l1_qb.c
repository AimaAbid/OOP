//input=distance in km
//output = distance in other units
#include<stdio.h>
int main()
{
    float km,f,i,cm,m;
    printf("Enter the distance in km");
    scanf("%f",&km);

    m=km*1000;
    f=km*3280.8;
    i=km*39370;
    cm=km*100000;

    printf("The distance in \n metres=%f \n feet=%f \n inches=%f \n centimeters =%f ",m,f,i,cm);
    return 0;
} 