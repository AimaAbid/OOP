/*magine a tollbooth at a bridge. Cars passing by the booth are expected to pay a 50 cent
toll. Mostly they do, but sometimes a car goes by without paying. The tollbooth keeps
track of the number of cars that have gone by, and of the total amount of money collected.
Objects and Classes

Model this tollbooth with a class called tollBooth. The two data items are a type
unsigned int to hold the total number of cars, and a type double to hold the total amount
of money collected. A constructor initializes both of these to 0. A member function called
payingCar() increments the car total and adds 0.50 to the cash total. Another function,
called nopayCar(), increments the car total but adds nothing to the cash total. Finally, a
member function called display() displays the two totals. Make appropriate member
functions const.
Include a program to test this class. This program should allow the user to push one key
to count a paying car, and another to count a nonpaying car. Pushing the Esc key should
cause the program to print out the total cars and total cash and then exit*/
#include<iostream>
#include<conio.h>
using namespace std;

class Toll_booth
{
    int cars;//book suggested using unsigned int
    double money;

    public:
     Toll_booth():cars(0),money(0.0){}
     
     void paying_car()
     {
         cars++;
         money+=0.5;
     }

     void non_paying_car()
     {
         cars++;
     }
     void display()
     {
         cout<<"Total no of cars "<<cars<<endl;
         cout<<"Total money "<<money<<endl;
     }


};


int main()
{
    int ascii_value;
    char choice;
    Toll_booth t1;
    cout<<"Press p key for paying car and n key for non paying car and esc key to quit"<<endl;
    
    while(1)
    {

        choice=getche();
        if(choice=='p')
        {
            t1.paying_car();
        }

        else if(choice=='n')
        {
            t1.non_paying_car();
        }

        else if(choice==27)
        {
            t1.display();
            break;
        }

    }


    return 0;
}