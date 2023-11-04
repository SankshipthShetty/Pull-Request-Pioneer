#include<iostream>
using namespace std;

int celsius(float temp)  //Celsius to Fahrenheit conversion function
{
  float fahrentemp = (9*temp)/5+32;
  cout<<temp<<"oC is equal to "<<fahrentemp<<"oF"<<endl;
}

int fahrenheit(float temp)  //Fahrenheit to Celsius conversion function
{
  float celtemp = (temp-32)*5/9;
  cout<<temp<<"oF is equal to "<<celtemp<<"oC"<<endl;
}

//main function
int main()
{
    int num;
    float temp;
    cout<<"Enter choice Celsius-Fahrenheit(1) or Fahrenheit-Celsius(0): ";
    cin>>num;
    cout<<"Enter the respective temperature: ";
    cin>>temp;
    num ? celsius(temp) : fahrenheit(temp);   //ternary operator to check condition
    return 0;
}