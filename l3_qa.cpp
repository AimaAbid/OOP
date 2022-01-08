//profit or loss
#include<iostream>
using namespace std;
int main()
{
    int cp,sp,amount;
    cout<<"Enter the cost price and selling price";
    cin>>cp>>sp;

    if(sp>cp)
    {
        amount=sp-cp;
        cout<<"Profit of Rs "<<amount<<endl;
    }

    else if(cp>sp)
    {
        amount=cp-sp;
        cout<<"Loss of Rs"<<amount<<endl;
    }

    else 
    {
        cout<<"Neither profit nor loss";
    }
    return 0;
}