#include<iostream>
using namespace std;
//~~~ COPY CONSTRUCTOR-->A copy constructor is used when one object of class initialze other object(copy data of one object to other)

class A
{
private:
    int a;
    int b;/* data */
public:
    A(int x , int y)
      {
        a=x; b=y; 
      }
     A(A &ref)
     {
         a=ref.a;
         b=ref.b;
     }
     int display()
     {
       cout<<a<<" "<<b<<endl;
     }
 };
 int main()
 {
   A obj(30, 20);
   A obj2=obj;
   obj.display();
   obj2.display();
  return 0;

 }
