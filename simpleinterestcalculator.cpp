#include<iostream>
using namespace std;

int main()
{
    int principal;
    int rate;
    int time;
    cout<<"Enter principal amount: ";
    cin>>principal;
    cout<<"Enter rate of interest: ";
    cin>>rate;
    cout<<"Enter time in years: ";
    cin>>time;
    float simpleInterest = (principal * rate * time)/100;
    cout<<"Simple Interest = "<<simpleInterest<<endl;
    return 0;
}