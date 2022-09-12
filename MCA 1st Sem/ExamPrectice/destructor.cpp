#include<iostream>
using namespace std;
 class Demo
     {
         private:
         int num1,num2;
         public:
         Demo(int x, int y)
         {
            num1=x; num2=y;
         }
         ~Demo()
         {
             cout<<"Inside the Destrctor";
         }
         void dispaly()
         {
             cout<<"num1 = "<<num1<<endl;
             cout<<"num2 = "<<num2<<endl;
         }
     };
  int main()
  {
      Demo obj(10,20);
      obj.dispaly();
  }

//  class marks
//     {
//         public:
//         int maths;
//         int science;
//         marks()
//         {
//             cout<<"Inside constructor"<<endl;
//             cout<<"C++ Object created"<<endl;

//         }
//         ~marks()
//         {
//             cout<<"Inside Destructor"<<endl;
//             cout<<"C++ Object destructed"<<endl;
//         }
//     };


// int main(){
//        marks obj1;
//        marks obj2;
    
//     return 0;
// }