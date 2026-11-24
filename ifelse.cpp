#include<iostream>
using namespace std;

int main()
{

    int age;
    cout<<"Enter your age: ";
    cin>>age;

if(age >= 18)
    {
        cout<<"You are eligible to vote."<<endl;
    }
    if(age>=25)
    {
        cout<<"You are eligible to contest in elections."<<endl;
    }
    else
    {
        cout<<"You are not eligible to vote."<<endl;    

    }if(age >= 65)
    {
        cout<<"You are eligible for senior citizen benefits."<<endl;
    }
    else
    {
        cout<<"You are not eligible for senior citizen benefits."<<endl;    

    }

    return 0;

}