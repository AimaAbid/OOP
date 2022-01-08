// triangle is valid or not when three angles are entered
#include<iostream>
using namespace std;
int main()
{
    float a,b,c;
    cout<<"Enter the three angles";
    cin>>a>>b>>c;

    if(a+b+c==180.0)
    {
        cout<<"The triangle is valid";
    }

    else
     {
         cout<<"the triangle is not valid";
     }
    return 0;
}  
