//aggregrate and percentage marks
#include<stdio.h>
int main()
{
    float a,b,c,d,e;
    printf("Enter the marks obtained by student in 5 subjects");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);

    printf("The aggregrate marks scored by student are : %f",(a+b+c+d+e)/5);
    printf("The percentage marks scored by student are : %f",((a+b+c+d+e)/500)*100);
    return 0;
}
