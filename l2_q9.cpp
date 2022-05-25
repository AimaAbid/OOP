#include<iostream>
using namespace std;
int main()
{
    int a1,b1,a2,b2,num,den;
    char dummychar;
    cout<<"enter the first fraction";
    cin>>a1>>dummychar>>b1;

    cout<<"enter the second fraction";
    cin>>a2>>dummychar>>b2;

    num=a1*b2+a2*b1;
    den=b1*b2;

    if(num==den)
    {
        cout<<1;
    }
    else
    {

    cout<<"sum is"<<num<<"/"<<den<<endl;
    }


    return 0;
}