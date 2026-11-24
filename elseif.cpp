#include<iostream>
using namespace std;

int main()
{
    int marks;
    cout<<"Enter your marks: ";
    cin>>marks;
    if(marks>=90)
    {
        cout<<"You got A grade."<<endl;
    }
    else if(marks>=80)
    {
        cout<<"You got B grade."<<endl;
    }
    else if(marks>=70)
    {
        cout<<"You got C grade."<<endl;
    }
    else if(marks>=60)
    {
        cout<<"You got D grade."<<endl;
    }
    else
    {
        cout<<"You got F grade."<<endl;
    }
    return 0;   
}