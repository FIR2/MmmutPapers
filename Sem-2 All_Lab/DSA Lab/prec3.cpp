// SSIGNMENT 3
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[100],i,n,pos;
    cout<<"Enter the size of array";
cin>>n;
cout<<"Enter Element in array"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
    cout<<"Enter the position "<<endl;
    cin>>pos;
    if(pos>n)
    {
        cout<<"Deletion is not possible";
    }
    else
    {
     for(i=pos;i<n-1;i++)
        {
        a[i]=a[i+1];
        }
        cout<<"Array are"<<endl;
    for(i=0;i<n-1;i++)
    {
        cout<<" "<<a[i];

    }
    }
}