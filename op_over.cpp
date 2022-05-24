#include<iostream>
using namespace std;
class Point
{
    float x,y;
    public:
     Point():x(0.0),y(0.0){}
     Point(float a,float b):x(a),y(b){}

     Point operator +(Point p)
     {
         Point temp;
         temp.x=x+p.x;
         temp.y=y+p.y;
         return temp;
     }

     void display()
     {
         cout<<"x="<<x<<endl;
         cout<<"y="<<y<<endl;
     }

};

int main()
{
    Point p1(2,3),p2(3,4),p3;
    p3=p1+p2;
    p3.display();
    return 0;

}