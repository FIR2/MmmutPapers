#include<iostream>
using namespace std;
   // parametrized constrctor passing one arguments
 
   class cube
   { 
       private:
       int side;
       public:
       cube(int x)
       {
           side=x;
       }
   };
   void main()
   {
       cube c1(10);
       cube c2(20);
       cout<<"side1 = "<<c1::side;


   }

// class integer
// {
//     private:
//     int a,b;
//     public:
//     integer(int x, int y) //parametrized constructor
//     {
//          a=x; b=y;
//     }
//    void display()
//    {
//     cout<<"a ="<<a<<endl;
//     cout<<"b ="<<b<<endl;
//    }

// };

// int main()
// {
//     integer i(20,30);
//     integer j(50,60);
//     i.display();
//     j.display();
    
// }



