#include<iostream>
using namespace std;

class Stack
{
    int arr[10];
    int top;

    public:
     
     Stack():top(-1){}

     void push(int n)
     {
         arr[++top]=n;
     }

     int pop()
     {
         return(arr[top--]);
     }

     void display()
     {
         int x;
         for(x=0;x<=top;x++)
         {
             cout<<arr[x]<<" ";
         }
     }

};

int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.pop();
    s.pop();
    s.pop();
    s.push(50);
    s.push(60);
    s.display();
    return 0;
}