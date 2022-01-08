//to check what day is on ist january of any year entered through keyboard
#include<iostream>
using namespace std;
int main()
{
    int yr,leap=0,no_of_yrs=0,ref=2001,days;
    cout<<"enter the year";
    cin>>yr;
//to find the number of years and no of leap years
    if(ref<yr)
    {
    
    while(ref<yr)
    {
        no_of_yrs++;
        if(ref%100==0)
        {
            if(ref%400==0)
            {
                leap++;
            }
        }
        else 
        {
            if(ref%4==0)
            {
                leap++;
            }
        }
        ref++;
        

        
    }
    }

    
    //mon will come again after 7 days thus devide by 7 if remainder is 1 then tues and so on
    days=(no_of_yrs-leap)*365+leap*366;
    
    days=days%7;
    

    switch(days)
    {
        case(0):cout<<"Monday"<<endl;
        break;

        case(1):cout<<"tuesday"<<endl;
        break;

        case(2):cout<<"wednesday"<<endl;
        break;

        case(3):cout<<"thursday"<<endl;
        break;

        case(4):cout<<"friday"<<endl;
        break;

        case(5):cout<<"saturday"<<endl;
        break;

        case(6):cout<<"sunday"<<endl;
        break;
    }




    


    return 0;
}