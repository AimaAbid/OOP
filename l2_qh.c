// swapping two numbers
#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter the two numbers you want to swap");
    scanf("%d%d",&a,&b);

    //swapping
    temp=a;
    a=b;
    b=temp;

    printf("After swapping: \n %d \n %d",a,b);

    return 0;
}