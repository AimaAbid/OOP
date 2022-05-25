#include<iostream>
using namespace std;

class Distance
{
    int feet;
    float inches;

    public:
     Distance():feet(0),inches(0){}
     Distance(int ft,float in):feet(ft),inches(in){}

     void get_distance()
     {
         cout<<"Enter feet and inches"<<endl;
         cin>>feet>>inches;
     }

     void display()
     {
         cout<<feet<<"\' "<<inches<<"\""<<endl;
     }

     bool operator <(Distance);

};

bool Distance::operator <(Distance d2)
{
    float i1=inches+(feet*12);
    float i2=d2.inches+(d2.feet*12);
    cout<<"i1 "<<i1<<endl;
    cout<<"i2 "<<i2<<endl;

    return(i1<i2)?true:false;
}


int main()
{
    Distance d1;
    d1.get_distance();

    Distance d2(6,2.5);

    d1.display();
    d2.display();

    if(d1<d2)
    {
        cout<<"distance 1 is less than 2"<<endl;
    }

    else
    {
        cout<<"Distance 2 is greater than or equal to distance 1"<<endl;

    }
    return 0;

}