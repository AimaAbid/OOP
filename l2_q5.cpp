//islower() fxn takes single letter as argument
//gives 0 if capital and non zero if small
#include<iostream>
#include<CTYPE.H>
using namespace std;
int main()
{
    char a;
    int alpha;
    cout<<"enter an alphabet";
    cin>>a;
    alpha=islower(a);
    
    if(alpha==0)
    {
        cout<<"uppercase";
    }
    else 
    {
        cout<<"lowercase";
    }

    return 0;
}