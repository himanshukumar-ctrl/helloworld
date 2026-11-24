#include<iostream>
using namespace std;

int main()
{
    int a;
    int b;

    //input a
    cout<<"enter a: ";  
    cin>>a;
    //input b
    cout<<"enter b: ";  
    cin>>b;
    //calculate sum
    int sum = a + b;
    int product = a * b;
    int difference = a - b;
    //output sum
    cout<<"sum = "<<sum<<endl;
    cout<<"product = "<<product<<endl;  
    cout<<"difference = "<<difference<<endl;
    return 0;
}