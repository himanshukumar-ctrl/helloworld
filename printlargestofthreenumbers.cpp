#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;
    int c;
    cout<<"Enter first number: ";
    cin>>a;
    cout<<"Enter second number: ";
    cin>>b;
    cout<<"Enter third number: ";
    cin>>c;
    if(a>b && a>c)
    {
        cout<<a<<endl;
    }
    else if(b>c)
    {
        cout<<b<<endl;
    }
    else
    {
        cout<<c<<endl;
    }
    return 0;
}