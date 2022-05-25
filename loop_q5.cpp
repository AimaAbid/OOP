#include<iostream>
using namespace std;
int main()
{
    int pol_num;
    float rate,reading;//rate=grams/miles    reading is odometer reading

    cout<<"1 Carbon monoxide"<<endl<<"2 Hydrocarbons"<<endl<<"3 Nitrogen oxides"<<endl
    <<"4 Nonmethane hydrocarbons "<<endl;

    cout<<"Enter pollutant number"<<endl;
    cin>>pol_num;

    cout<<"Enter the number of grams emitted per mile"<<endl;
    cin>>rate;

    cout<<"Enter odometer reading"<<endl;
    cin>>reading;

    switch(pol_num)
    {
        case 1:
          if(reading<=50000)
          {
              if(rate<=3.4)
              {
                  cout<<"emissions are within permitted levels"<<endl;
              }

              else
              {
                  cout<<"emissions exceed the permitted level of 3.4 grams per miles"<<endl;
              }
          }

          else
          {
              if(rate<=4.2)
              {
                  cout<<"emissions are wihin permitted levels"<<endl;
              }

              else
              {
                  cout<<"emmisions exceed the permitted level of 4.2 grams/miles"<<endl;
              }
            

          }
          break;


        case 2:
          if(reading<=50000)
          {
              if(rate<=0.31)
              {
                  cout<<"emissions are within permitted levels"<<endl;
              }

              else
              {
                  cout<<"emissions exceed the permitted level of 0.31 grams per miles"<<endl;
              }
          }

          else
          {
              if(rate<=0.39)
              {
                  cout<<"emissions are wihin permitted levels"<<endl;
              }

              else
              {
                  cout<<"emmisions exceed the permitted level of 0.39 grams/miles"<<endl;
              }

              
            

          }
          break;



        case 3:
          if(reading<=50000)
          {
              if(rate<=0.4)
              {
                  cout<<"emissions are within permitted levels"<<endl;
              }

              else
              {
                  cout<<"emissions exceed the permitted level of 0.4 grams per miles"<<endl;
              }
          }

          else
          {
              if(rate<=0.5)
              {
                  cout<<"emissions are wihin permitted levels"<<endl;
              }

              else
              {
                  cout<<"emmisions exceed the permitted level of 0.5 grams/miles"<<endl;
              }

              
            

          }
          break;




        case 4:
          if(reading<=50000)
          {
              if(rate<=0.25)
              {
                  cout<<"emissions are within permitted levels"<<endl;
              }

              else
              {
                  cout<<"emissions exceed the permitted level of 0.25 grams per miles"<<endl;
              }
          }

          else
          {
              if(rate<=0.31)
              {
                  cout<<"emissions are wihin permitted levels"<<endl;
              }

              else
              {
                  cout<<"emmisions exceed the permitted level of 0.31 grams/miles"<<endl;
              }
            

          }
          break;   


    }     
    return 0;
}