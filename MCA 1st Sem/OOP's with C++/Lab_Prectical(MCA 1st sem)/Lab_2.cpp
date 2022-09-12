//Write a c++ program to find the sum of first n  natural numbers.            DATE--> 22/11/2021
#include<iostream>
using namespace std;

int main(){
    // --- USING FOR LOOP ---
    //   int n, sum=0;
    //   cout<<"Enter the value of N:";
    //   cin>>n;
    //   for(int i=1;i<=n; ++i)
    //   {
    //     sum=sum+i;        
    //   }
    //   cout<<"sum = "<<sum<<endl;

      //--- USING WHILE LOOP ---
      int n,i,sum=0;
      cout<<"Enter the value of N:";
      cin>>n;
      i=1;
      while (i<=n)
      {
         sum=sum+i;
         i++;
      }
      cout<<"sum = "<<sum;
      
    return 0;
}