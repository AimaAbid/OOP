#include<iostream>
using namespace std;

struct point
{
    float x;
    float y;

};



int main()
{
    point p1,p2,p3;

    cout<<"Enter the coordinates of first point"<<endl;
    cin>>p1.x>>p1.y;

    cout<<"Enter the coordinates of second point"<<endl;
    cin>>p2.x>>p2.y;

    p3.x=p1.x+p2.x;
    p3.y=p1.y+p2.y;

    cout<<"the new coordinate is "<<p3.x<<" "<<p3.y;


    return 0;
}