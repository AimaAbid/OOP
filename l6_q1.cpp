/* Create a class that imitates part of the functionality of the basic data type int. Call the
class Int (note different capitalization). The only data in this class is an int variable.
Include member functions to initialize an Int to 0, to initialize it to an int value, 
to display it (it looks just like an int), and to add two Int values.
Write a program that exercises this class by creating one uninitialized and two initialized
Int values, adding the two initialized values and placing the response in the uninitialized
value, and then displaying this result*/
#include<iostream>
using namespace std;

class Int
{
    int var;

    public:
    Int():var(0){}
    Int(int num):var(num){}

    void display()
    {
        cout<<var;
    }

    void add(Int n1,Int n2);

};

void Int::add(Int n1,Int n2)
{
    
    var=n1.var+n2.var;
    
}

int main()
{
    Int i1(3),i2(4),i3;
    i3.add(i1,i2);
    i3.display();
    return 0;
}