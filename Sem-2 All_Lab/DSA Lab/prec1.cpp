// ASSIGNMENT 1

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n,a[20],largest=0,scndlargest=0,post1,post2;
    cout<<"Enter the size of array"<<endl;
    cin>>n;
    cout<<"Enter the element of the array"<<endl;

    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }

    //finding largest
    for(i=0;i<n;i++)
{
    if(a[i]>largest)
    {
        largest=a[i]; 
        post1=i;
    }

}
//second largest
 for(i=0;i<n;i++)
 {
     if(a[i]>scndlargest&&a[i]!=largest)
      
      {
          scndlargest=a[i];
          post2=i;
      }
      
 }
 cout<<"largest no is."<<largest<<" at position "<<" "<<(post1 + 1)<<endl;
 cout<<"secondlargest no is."<<scndlargest<<"at position"<<" "<<(post2 + 1);
 getch();
 
    
}
