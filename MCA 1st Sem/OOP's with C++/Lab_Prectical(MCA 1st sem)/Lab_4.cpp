//Write a c++ program to check whether number is even or odd                 DATE-->     06/12/2021
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter an integer:"<<endl;
    cin>>n;
    if(n%2==0)
    {
       cout<<n<<" is Even numer:"<<endl; 
    }else
    {
        cout<<n<<" is Odd number:"<<endl;
    }
    return 0;
}