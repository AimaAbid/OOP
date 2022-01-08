//to check whether threee points are collinear or not
//three points are collinear if the area of triangle formed by them is zero
//that is x1(y2-y3)+x2(y3-y1)+x3(y1-y2)=0 
#include<iostream>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3,area;

    cout<<"ENTER x1,y1,x2,y2,x3,y3";
    cin>>x1>>y1>>x2>>y2>>x3>>y3;
    
    area=x1*(y2-y3)+x2*(y3-y1)+x3*(y1-y2);
    if(area==0)
    {
        cout<<"The three points are collinear";
    }

    else
    {
        cout<<"the three points are not collinear";
    }


    return 0;
}