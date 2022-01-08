//check whether leap year or not
#include<iostream>
using namespace std;
int main()
{
    int yr;
    cout<<"enter the year";
    cin>>yr;

    if(yr%100==0)
    {
        if(yr%400==0)
        {
            cout<<"its a leap year";
        }

        else
        {
            cout<<"its not a leap year";
        }
    }

    else
    {
        if(yr%4==0)
        {
            cout<<"its leap year";
        }

        else
        {
            cout<<"its not a leap year";
        }
    }
    
    return 0;
}