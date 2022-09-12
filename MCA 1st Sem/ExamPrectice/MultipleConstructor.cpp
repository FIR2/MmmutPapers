// #include<iostream>
// using namespace std;

// class person
// {
//     private:
//     int age;
//     public:
//     person()
//     {
//         cout<<"Enter the age:";
//         cin>>age;
//         cout<<age<<endl;
        
//     }
//     person(int a)
//     {
//         age=a;
//         cout<<age<<endl;
//     }
//     int getAge()
//     {
//         return age;
//     }
// };
// int main()
// {
//     person p1,p2(45);
    // cout<<"person1 age : "<<p1.getAge()<<endl;
    // cout<<"person2 age : "<<p2.getAge()<<endl;

// }
//   class test
//    {
//        private:
//        int a,b;
//        float c;
//        public:
//        test()
//        {
//            cout<<"Enter two numbers.. ";
//            cin>>a>>b;
//            cout<<a<<" "<<b<<endl;
//        }
//        test(int x, int y)
//        {
//            a=x; b=y;
//            cout<<a<<" "<<b<<endl;
//        }
//        test(int x,float y)
//        {
//           a=x; c=y;
//           cout<<a<<" "<<c;
//        }
//    };

// int main()
//  {
//          test obj1;
//          test obj2(10,20);
//          test obj3(200,30.5F);
//     return 0;
// }


#include<iostream>
using namespace std;

class A{
    private:
    int a ,b;
    float c;
    public:
    A()
    {
        cout<<"Enter the two numbers.....";
        cin>>a>>b;
        cout<<a<<" "<<b<<endl;
    }
    A(int x ,int y)
    {
        a=x; b=y;
        cout<<a<<" "<<b<<endl;
    }
    A(int x, float y)
    {
        a=x; x=y;
        cout<<a<<" "<<c;
    }
    // A(A &ref)
    // {
    //     a=ref.a;
    //     b=ref.b;
    // }
    
};


int main(){
    A obj1,obj2(100,200),obj3(10,20.3F);
    
    return 0;
}