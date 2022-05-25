//operator overloading ++ with return
#include<iostream>
using namespace std;

class Counter
{
    unsigned int count;

    public:
     Counter():count(0){}
     Counter(int c):count(c){}
     
     Counter operator ++()//syntax for operator overloading
     {
         count++;
         Counter temp;//creating object  temp to return the value of count
         temp.count=count;
         return temp;
     }

     Counter operator ++(int)
     {
         return Counter(count++);
     }

     unsigned int get_count()//as it returns unsigned int i.e count
     {
         return count;
     }
};

int main()
{
    Counter c1,c2,c3,c4;
    ++c1;
    c2=++c1;//c2=1,c2=2
    cout<<"c1 "<<c1.get_count()<<endl;
    cout<<"c2 "<<c2.get_count()<<endl;

    c3++;//c3=1
    c4=c3++;//c3=2,c4=1
    cout<<"c3 "<<c3.get_count()<<endl;
    cout<<"c4 "<<c4.get_count()<<endl;
    return 0;
}