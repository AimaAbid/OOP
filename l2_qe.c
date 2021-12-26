//input=latitude and longitude
//output=distance b/w two places in nautical miles
#include<stdio.h>

#include<math.h>
int main()
{
    float l1,g1,l2,g2,d,rad;
    printf("enter the latitude and longitude of loc 1");
    scanf("%f%f",&l1,&g1);

     printf("enter the latitude and longitude of loc 2");
     scanf("%f%f",&l2,&g2);

     rad=3.14/180.0;
     l1=l1*rad;
     l2=l2*rad;
     g1=g1*rad;
     g2=g2*rad;

     d=3963.0*(acos(sin(l1)*sin(l2)+cos(l1)*cos(l2)*cos(g2-g1)));
     printf("%f",d);

     return 0;

    


    
}