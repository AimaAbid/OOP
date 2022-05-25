#include<iostream>
using namespace std;
int main()
{
    float dollars,us,franc,ger,yen;
    cout<<"Enter the amount in dollars";
    cin>>dollars;
    
    us=dollars*1.487;
    franc=dollars*0.172;
    ger=dollars*0.584;
    yen=dollars*0.0095;
    

    cout<<"US="<<us<<endl<<"Franc ="<<franc<<endl<<"Ger="<<ger<<endl<<"Yen="<<yen<<endl;
     return 0;
}