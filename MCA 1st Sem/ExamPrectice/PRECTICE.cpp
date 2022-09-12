#include<iostream>
using namespace std;
class test{
    private:
    int a ,b;
    public:
    test(){
      
        a=100;b=200;
        cout<<a<<" "<<b<<endl;
        cout<<"sum of a+b ="<<a+b;

    }

};

int main(){
    test obj;
    return 0;
}

// // #include<iostream>
// // using namespace std;

// // class base{
// //     protected:
// //     int a,b;
// //     public:
// //     void show()
// //     {
// //         a=10;
// //         b=20;
// //         cout<<a<<" "<<b<<endl;
// //     }

// // };
// // class derive:public base{
// //     public:
// //     void display(){
// //         a=50;b=60;
// //         cout<<a<<" "<<b<<endl;
// //     }
// // };
// // int main(){
// //     derive obj;
// //     obj.display();
// //     obj.show();
    
// //     return 0;
// // }
// #include<iostream>
// using namespace std;
// class test{
//     private:
//     int a,b;
//     public:
//     void input()
//     {
//         cout<<"Enter two number";
//         cin>>a>>b;
//     }
//     friend void add(test ref);
// };

// void add(test ref){
//     int m;
//     m=ref.a+ref.b;
//     cout<<"sum="<<m;
// }

// int main(){
//     test obj;
//     obj.input();
//     add(obj);

//     return 0;
// }