
// ASSIGNMENT 2
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int a[100],i,n,element,pos;
    cout<<"Enter the size of array";
cin>>n;
cout<<"Enter Element in array"<<endl;
for(i=0;i<n;i++)
{
    cin>>a[i];
}
    cout<<"Enter the position & element"<<endl;
    cin>>pos>>element;
    if(pos>n)
    {
        cout<<"Insertion is not possible";
    }
    else
     for(i=n;i>=pos;i--)
        {
        a[i]=a[i-1];
        }
    
        a[pos]=element;
        n++;
    cout<<"Array are"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<" "<<a[i];

    }
    
getch();

}
