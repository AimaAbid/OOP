//currency
#include<stdio.h>
int main()
{
    int n,i;
    printf("Enter the amount");
    scanf("%d",&n);

    while(n>100)
    {
        n=n-100;
        i++;
    }

    while(n>50)
    {
        n=n-50;
        i++;
    }

    while(n>10)
    {
        n=n-10;
        i++;
    }

    while(n>5)
    {
        n=n-5;
        i++;
    }

    while(n>2)
    {
        n=n-2;
        i++;
    }

    while(n>=1)//n>=1 because at end we need 0
    {
        n=n-1;
        i++;
    }
    

    printf("The smallest no of notes is %d",i);

    return 0;
}