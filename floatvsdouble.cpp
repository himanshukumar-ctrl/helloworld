#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    float PI = 3.14159265358979323846; //this is single line comment by double slASH
    double PI2 = 3.14159265358979323846; /* this is 
    a multi-line 
    comment */

    cout<<"PI = "<<setprecision(20)<<PI<<endl;
    cout<<"PI2 = "<<setprecision(20)<<PI2<<endl;
    
    return 0;
}