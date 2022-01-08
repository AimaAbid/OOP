//to reverse a no and check if original and reversed nos are same
#include<iostream>
using namespace std;
int main()
{
    int a[5],b[5],temp=0,i;
    cout<<"Enter the five digit number"<<endl;
    
    for(i=0;i<5;i++)
    {
        cin>>a[i];//input no
    }

    for(i=0;i<5;i++)
    {
        b[i]=a[4-i];//reverse the no
    }

    for(i=0;i<5;i++)
    {
        cout<<b[i];//output reversed no
    }
    
    //check if reversed no is same as original
    for(i=0;i<5;i++)
    {
        if(a[i]!=b[i])
        {
            temp=1;
            break;
        }
    }

    if(temp==0)
    {
        cout<<endl<<"The input and reversed numbers are same"<<endl;
    }
    else
    {
        cout<<"The input and reversed nos are different";
    }

    


    return 0;
}