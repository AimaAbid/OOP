#include<iostream>
using namespace std;
int main()
{
    float classes,attended,extra,extra_classes;
    float attendance;
    char choice;
    
    cout<<"enter the total no of classes"<<endl;
    cin>>classes;

    cout<<"enetr the total no of classes attended"<<endl;
    cin>>attended;

    attendance=(attended/classes)*100.0;

    if(attendance>=75)
    {
        cout<<"There is no shortage";
    }

    else
    {
        cout<<"You are having shortage"<<endl<<"Do you have any medical issue?";
        cin>>choice;

        if(choice=='y')//10% relaxation
        {
            if(attendance>=65)
            {
                cout<<"You are eligible to a relaxation of relaxation of 10%"<<endl;
                cout<<"After relaxation you have no shortage";
            }

            else
            {
                extra=65-attendance;
                extra_classes=(extra/100)*classes;
                cout<<"Even after relaxation of 10% you have shortage"<<endl
                <<"You will have to attend "<<extra_classes<<" extra classes";
            }
        }
        else if(choice=='n')//no relaxation
        {
            extra=75-attendance;
            extra_classes=(extra/100)*classes;
            cout<<"you will have to attend "<<extra_classes<<" extra classes"<<endl;

        }
    }

    
    return 0;
}