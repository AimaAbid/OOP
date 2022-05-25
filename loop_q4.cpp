#include<iostream>
using namespace std;
int main()
{
    float x,y;
    cout<<"Enter the coordinates of point"<<endl;
    cin>>x>>y;

    if(x==0 && y==0)
    {
        cout<<"The point lies on origin"<<endl;
    }

    else if(x==0 && y!=0)
    {
        cout<<"The point lies on y axis"<<endl;
    }

    else if(y==0 && x!=0)
    {
        cout<<"The point lies on x axis"<<endl;
    }

    else if(x!=0 && y!=0)
    {
        if(x>0 && y>0)
        {
            cout<<"1st Quadrant"<<endl;
        }

        if(x<0 && y>0)
        {
            cout<<"2nd Quadrant"<<endl;
        }

        if(x<0 && y<0)
        {
            cout<<"3rd Quadrant"<<endl;
        }

        if(x>0 && y<0)
        {
            cout<<"4th Quadrant"<<endl;
        }
    }
    return 0;
}