//operator overloading ++ with return
#include<iostream>
using namespace std;

class Counter
{
    unsigned int count;

    public:
     Counter():count(0){}
     
     Counter operator ++()//syntax for operator overloading
     {
         ++count;
         Counter temp;//temp is object to return count
         temp.count=count;
         return temp;
         
     }

     unsigned int get_count()//as it returns unsigned int i.e count
     {
         return count;
     }
};

int main()
{
    Counter c1,c2;
    c2=++c1;
    c2=++c2;
    c2=++c2;
    cout<<c2.get_count();
    return 0;
}