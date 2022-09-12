#include<iostream>
using namespace std;

class A{
    int a ,b; //data member
    public:
    void input() //  create a member function 
     {
         cout<<"Enter two number :";
         cin>>a>>b;
     }
     friend class B;
};
class B{
    int c;//data member
    public:
    void add(A ob) // create a member function
     {
        c=ob.a+ob.b;
        cout<<"sum= "<<c;
     }
};
int main(){
      A oo;  B kk;
      oo.input();
      kk.add(oo);
      return 0;
}
