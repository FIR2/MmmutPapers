// Write a c++ program using if statement for providing bonus when salary is grater than 1000.       DATE--> 06/12/2021          
#include<iostream>
using namespace std;

int main(){
    float sal ,b;
    cout<<"Enter your salary :"<<endl;
    cin>>sal;
    if(sal>10000)
      {
          b=(sal*100)/100;
          cout<<"Bonus = "<<b<<endl;
          sal =sal+b;

      }
      cout<<"salary = "<<sal;
    return 0;
}