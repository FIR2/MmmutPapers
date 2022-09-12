// Write a c++ program to swap two numbers                   DATE-->  29/11/2021
#include <iostream>
using namespace std;

int main()
{
   int a ,b;
   cout<<"Enter two numbers:"<<endl;
   cin>>a>>b; //a=10     b=20
   a=a+b;   // a=10+20=30
   b=a-b;   // b=30-20=10
   a=a-b;   // a=30-10=20
   cout<<"a = "<<a<<" "<<"b = "<<b<<endl;
    return 0;
}
