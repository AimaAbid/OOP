//structure to display phone no
#include<iostream>
using namespace std;

struct phone
    {
        int area_code;
        int exchange;
        int number;
    };


int main()
{
    phone no2;
    phone no1={222,1345,7000};
    cout<<"Enter your area code exchange and number"<<endl;
    cin>>no2.area_code>>no2.exchange>>no2.number;

    cout<<"my phone no is "<< no1.area_code<<no1.exchange<<no1.number<<endl;
    cout<<"your phone no is "<< no2.area_code<<no2.exchange<<no2.number<<endl;
    
    return 0;
}