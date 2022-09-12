#include<iostream>
using namespace std;

// ~~~~~~~~~~~~ PUBLIC SPECIFIER~~~~~~~~~~~~~~~~~
//  class A
// {
// public:
// int a;//data member
//  void show() // member function
// {
//     a=10;
//     cout<<"Inside the class: "<<a<<endl;
// }

// };

// int main()
// {
//     A obj;
//     obj.show();
// }

//OUT SIDE THE CLASS
// class A 
// {
//     public:
//     int a;
//     void show();

// };

// void A:: show()
// {
//     a=10;
//     cout<<"outside the class :"<<a<<endl;
// }

// int main()
// {
//      A obj;
//      obj.show();
//      return 0;
// }


//PROTECTED ACCESS SPECIFIER~~~~

class Base
  {
    protected:
    int a,b; // DATA MEMBER
    public:
    void show()  //  MEMBER FUNCTION
      {  
       a=10;b=20;
       cout<<a<<ends<<b<<endl;
      }
  };

class Derive : public Base
  {
    public:
    void display()
      {
       a=30;b=40;
       cout<<a<<ends<<b<<endl;
       }
   };
int main()
  {
   Derive obj;
   obj.display();
   obj.show();
   // return 0;
  }




















// #include<iostream.h>
// using namespace std;

// class student
// {
// private :
// int roll;
// char name[30];

// public:
// void get_data()
// {
// cout<<"Enter the roll no and name :";
// cin>>roll>>name;
// }
// void put_data()
// {
// cout<<"Roll No :"<<roll<<endl;
// cout<<"Name :"<<name<<endl;
// }

// };