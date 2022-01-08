//to find absolute value
//abs(int) is in cstdlib header file
#include<iostream>
#include<cstdlib>
using namespace std;
int main()
{
    int num,ans;
    cout<<"enter the number";
    cin>>num;
    ans=abs(num);
    cout<<"the absolute value of"<<num<<" is "<<ans;

    return 0;
}