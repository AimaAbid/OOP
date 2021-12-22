//l1 Qf
#include<stdio.h>
int main()
{
    int i,a=1189,b=841;
    for(i=1;i<9;i++)
    {
        if(a>b)
        {
            a=a/2;
            printf("A%d=%d*%d\n",i,b,a);
        }

        else if(b>a)
        {
            b=b/2;
            printf("A%d=%d*%d\n",i,a,b);
        }
    }

    
    return 0;
}