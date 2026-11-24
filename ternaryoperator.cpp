#include<iostream>
using namespace std;

int main()
{
    bool isAdult;
    int age;
    cout<<"Enter your age: ";
    cin>>age;
    isAdult = (age>=18) ? true : false ; // ternary operator 
   cout<<"you are an adult: "<<isAdult<<endl;
    return 0;
}