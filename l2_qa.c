// to find the sum of digits of a five digit number
#include<stdio.h>

int main()
{
    int num,dig,sum,i;

    printf("Enter a five digit number");
    scanf("%d",&num);

    sum=num%10;//last dig is stored in num


    for(i=1;i<5;i++)
    {
        num=num/10;//loop stores digit from second last to first in sum
        dig=num%10;
        sum=sum+dig;
    }
    printf("%d",sum);
    return 0;

}