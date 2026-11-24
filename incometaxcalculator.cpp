#include<iostream>
using namespace std;

int main()
{
    int income;
    cout<<"Enter your income: "; // income could have been taken in lakhs like enter income (in lakhs): 5.5, but for simplicity we are taking it in whole numbers
    cin>>income;
    if(income<=500000)
    {
        cout<<"You are not required to pay income tax."<<endl;
    }
    else if (income>500000 && income<=1000000)
    {
        cout<<"You are required to pay 20% income tax."<<endl;
    }
    else
    {
        cout<<"You are required to pay 30% income tax."<<endl;
    }
    return 0;
}