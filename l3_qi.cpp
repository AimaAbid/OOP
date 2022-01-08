//to check if area or perimeter of rectangle is greater
#include<iostream>
using namespace std;
int main()
{
    float l,b,area,peri;
    cout<<"enter the length and breadth of rectangle";
    cin>>l>>b;
    
    area=l*b;
    peri=2*(l+b);

    if(area>peri)
    {
        cout<<"area is greater";
    }

    else if(peri>area)
    {
        cout<<"perimeter is greater";
    }
    return 0;
}