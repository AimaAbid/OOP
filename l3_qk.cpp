//to check if ppoint lies inside or on or outside the circle
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
    int xc,yc,x,y,r,s;//xc and yc are coordinates of centre

    cout<<"enter the x and y coordinates of centre of circle";
    cin>>xc>>yc;

    cout<<"enter the x and y coordinayes of point and radius";
    cin>>x>>y>>r;

    s=pow((xc-x),2)+pow((yc-y),2)-r*r;

    if(s<0)
    {
        cout<<"the point is inside circle";
    }

    else if(s>0)
    {
        cout<<"the point is outside circle";
    }

    else
    {
        cout<<"the point is on the circle";

    }


    return 0;
}