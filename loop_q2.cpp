//bmi
#include<iostream>
using namespace std;
int main()

{
    float height ,weight,bmi;

    cout<<"Enter your weight in pounds "<<endl;
    cin>>weight;
    
    cout<<"Enter your height in inches"<<endl;
    cin>>height;

    bmi=703*(weight/(height*height));

    if(bmi<18.5)
    {
        cout<<"UNDER WEIGHT"<<endl;
    }

    else if(bmi>=18.5 && bmi<=24.9)
    {
        cout<<"NORMAL"<<endl;
    }

    else if(bmi>=25 && bmi<=29.9)
    {
        cout<<"OVER WEIGHT"<<endl;
    }

    else if(bmi>=30)
    {
        cout<<"OBESE"<<endl;
    }

    return 0;
}