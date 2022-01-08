//who is youngest all cases included
#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"enter your ages ram,shyam and ajay";
    cin>>a>>b>>c;

    if(a==b && a==c)
    {
        cout<<"the three have same age";
    }

    if(a==b && a<c)
    {
        cout<<"Ram and sham are of same age and younger than ajay";

    }

    if(c==b && c<a)
    {
        cout<<"Ajay and sham are of the same age and younger than ram";

    }

    if(a==c && a<b)
    {
        cout<<"Ram and ajay are of the same age andyounger than sham";

    }

    if(a<b && a<c )
    {
        cout<<"ram is youngest";
    }

    if(b<c && b<a)
    {
        cout<<"sham is youngest";
    }

    if(c<a && c<b)
    {
        cout<<"ajay is youngest";
    }

    return 0;
}