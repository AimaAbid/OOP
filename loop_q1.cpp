//discount and tax
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    float purchases,dis,dis_total,total;//dis_total=discounted total
    char choice;

    cout<<"Enter total purchases"<<endl;
    cin>>purchases;

    cout<<"Are you a music teacher(y/n)"<<endl;
    cin>>choice;

    cout<<setw(25)<<"Total purchases $"<<setw(6)<<purchases<<endl;

    if(choice=='y')
    {
        

        if(purchases<100)//10% discount
        {
            dis=(10.0/100)*purchases;
            dis_total=purchases-dis;
            
        }

        else if(purchases>=100)//12%discount
        {
            dis=(12.0/100)*purchases;
            dis_total=purchases-dis;
        }

    
        total=dis_total+(5.0/100)*dis_total;//adding sales tax

        cout<<setw(25)<<"Teacher's discount $"<<setw(6)<<dis<<endl;
        cout<<setw(25)<<"Discounted total $"<<setw(6)<<dis_total<<endl;
        cout<<setw(25)<<"Sales tax $"<<setw(6)<<(5.0/100)*dis_total <<endl;
        cout<<setw(25)<<"Total $"<<setw(6)<<total<<endl;

    }


    else if(choice=='n')//no discount only tax added
    {
        total=purchases+(5.0/100)*purchases;
        cout<<setw(25)<<"Sales tax"<<setw(6)<<(5.0/100)*purchases<<endl;
        cout<<setw(25)<<"Total "<<setw(6)<<total<<endl;
    }
    return 0;
}