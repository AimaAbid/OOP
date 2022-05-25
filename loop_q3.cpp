//switch cant be used for this program as case can not be followed by relational operators 
//or float constants so we cant have (for example)  case i<20 this is a limitation of switch
#include<iostream>
using namespace std;
int main()
{
    float n;
    cout<<"enter the richter scale number of earth quake "<<endl;
    cin>>n;

    if(n<5)
      cout<<"little or no damage"<<endl;

    else if(n>=5 && n<5.5)
      cout<<"some damage"<<endl;  
    
    else if(n>=5.5 && n<6.5)
      cout<<"serious damage:walls may crack"<<endl;

    else if(n>=5.6 && n<7.5)
      cout<<"disaster:houses and buildings may collapse"<<endl;

    else
      cout<<"catastrophe:most buildings destroyed";    



    return 0;
}