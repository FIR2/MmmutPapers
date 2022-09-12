#include<iostream>
using namespace std;

inline int max(int a, int b)
{
	return a > b ? a : b;
}
int main()
{
    int a,b;
    cout<<"Enter the value of a & b:"<<endl;
    cin>>a>>b;
	cout << "Greatest number is: " << max(a, b) << endl;
    return 0;
}
