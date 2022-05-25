
#include<iostream>

using namespace std;
int main()
{
    float num1,num2,answer;
    char choice='y';
    char operand;

    while(choice=='y')
    {
      cout<<"Enter the number,operand,number"<<endl;
      cin>>num1>>operand>>num2;

      switch(operand)
      {
          case '+':
          answer=num1+num2;
          break;


          case '-':
          answer=num1-num2;
          break;

          case '*':
          answer=num1*num2;
          break;

          case '/':
          answer=num1/num2;
          break;

      }

      cout<<"the answer of "<<num1<<operand<<num2<<"="<<answer<<endl;
      cout<<"Do yo want to continue(y/n)"<<endl;
      cin>>choice;
    }

    return 0;
}