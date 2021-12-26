// recieve x and y coordinates and convert into polar ones ie r and fi
# include<stdio.h>
#include<math.h>
int main()
{
    float x,y,r,fi;
    printf("enter the x coordinate\n");
    scanf("%f",&x);

    printf("enter the y coordinate\n");
    scanf("%f",&y);

    r=sqrt((x*x)+(y*y));
    fi=(atan(y/x))*(360/(2*3.14));//tan inverse y/x gives value in radian we convert
   //it to degrees

    printf("the value of \n r=%f \n fi=%f",r,fi);

    
    
    return 0;
}