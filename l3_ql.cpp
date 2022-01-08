#include<iostream>
using namespace std;
int main()
{
    int x,y;
    cout<<"enter the x and y coordinate of the point";
    cin>>x>>y;

    if(x!=0 && y!=0)
    {
        cout<<"this point doesn't lie on any axis";
    }
    else if(x==0 && y!=0)
    {
        cout<<"this point lies on y axis";
    }

    else if(x!=0 && y==0)
    {
        cout<<"this point lies on x axis";
    }

    else if(x==0 && y==0)
    {
        cout<<"this point lies on origin";
    }
    
    return 0;
}