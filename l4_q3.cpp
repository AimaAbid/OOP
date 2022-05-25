#include<iostream>
using namespace std;
struct Distance
{
    int feet;
    float inches;

};

struct volume
{
    Distance length;
    Distance breadth;
    Distance width;

};

int main()
{
    volume v1;
    v1.length.feet=70;
    v1.length.inches=50;
    v1.breadth.feet=40;
    v1.breadth.inches=11;
    v1.width.feet=99;
    v1.width.inches=40;

    float len;
    len=v1.length.feet+(v1.length.inches/12.0);

     float wid;
    wid=v1.width.feet+(v1.width.inches/12.0);

     float bre;
    bre=v1.breadth.feet+(v1.breadth.inches/12.0);

    float vol;
    vol=len*bre*wid;

    cout<<vol;



    return 0;
}