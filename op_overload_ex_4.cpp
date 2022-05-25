/*we take one distance from the user and the other is initialized by us 
then we use operator overloading on +  thus display the added distance*/
#include<iostream>
using namespace std;
class Distance
{
    int feet;
    float inches;

    public:
    Distance():feet(0),inches(0.0){}
    Distance(int fl,float in):feet(fl),inches(in){}//to return using nameless object

    void get_distance()
    {
        cout<<"Enter feet and inches"<<endl;
        cin>>feet>>inches;
    }

    void display()
    {
        cout<<feet<<"\'- "<<inches<<"\""<<endl;
    }

    Distance operator +(Distance);

};

   Distance Distance::operator +(Distance d2)//def of fxn outside the class
   {
       int f;
       float i;

       i=inches+d2.inches;

       while(i>=12)
       {
           i=i-12;
           f++;

       }

       f=f+feet+d2.feet;
       return Distance(f,i);//returning using nameless object
   }

   int main()
   {
       Distance d1,d2(11,6.25),d3;
       d1.get_distance();
       
       d3=d1+d2;
       d3.display();
       return 0;

   }