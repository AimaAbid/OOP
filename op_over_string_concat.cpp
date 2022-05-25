#include<iostream>
using namespace std;
#include<string.h>
#include<stdlib.h>
class String
{
    enum {size=80};
    char str[size];

    public:
     String()
     {
         strcpy(str," ");
     }

     String(char s[])
     {
         strcpy(str,s);
     }

     void display() const
     {
         cout<<str;
     }

     

};