#include<iostream>
using namespace std;
// default constructor--> A constrctor with no parameters is known as default constructer

  class test
  {
      private:
      int a;
      public:
      test()
      {
         a=100;
         cout<<a;
      }
  };

int main()
{
    test obj;    
    return 0;
}