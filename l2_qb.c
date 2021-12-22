#include<stdio.h>

int main()
{
    int num,dig,i,arr[5];

    printf("Enter a five digit number");
    scanf("%d",&num);

    arr[0]=num%10;


    for(i=1;i<5;i++)
    {
        num=num/10;
        arr[i]=num%10;
        
    }
    
    for(i=0;i<5;i++)
    {
        printf("%d",arr[i]);
    }
    return 0;

}