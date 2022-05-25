//operator overloading ++ with return using nameless object
#include<iostream>
using namespace std;

class Counter
{
    unsigned int count;

    public:
     Counter():count(0){}
     Counter(int c):count(c){}//constructor to make statement Counter(count) work
     
     Counter operator ++()//syntax for operator overloading
     {
         ++count;
         return  Counter (count);
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