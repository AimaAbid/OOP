//fibonacci using recursion
//term no 1 is the first term ie 0
//0 1 1 2 3 5 8 13 21 34 55 89 144
#include<iostream>
using namespace std;

int fib(int );

int main()
{
    int ans;
    int num;
    cout<<"Enter the term you want to find in fibbonacci series"<<endl;
    cin>>num;

    cout<<"The "<<num<<" term is "<<fib(num);

    return 0;
}


int fib(int num)
{
    int f;

    if(num==1)//ist term
    {
        return 0;
    }

    else if(num==2)//2nd term
    {
        return 1;
    }


    else
    {
        f= fib(num-1)+fib(num-2);
        return f;
    }
}