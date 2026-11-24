#include<iostream>
using namespace std;    

int main()
{
    int eng;

    int math;

    int sci;

    cout<<"Enter marks of english: ";
    cin>>eng;   
    cout<<"Enter marks of maths: ";
    cin>>math;  
    cout<<"Enter marks of science: ";
    cin>>sci;

    int avg = (eng + math + sci)/3;
    cout<<"Average marks = "<<avg<<endl;
    return 0;
}