#include<iostream>
using namespace std;    

int main()
{
    float eng;
    float math; 
    float sci;
    cout<<"Enter marks of english: ";   
    cin>>eng;
    cout<<"Enter marks of maths: ";
    cin>>math;
    cout<<"Enter marks of science: ";   
    cin>>sci;
    float avg = (eng + math + sci)/3;
    cout<<"Average marks = "<<avg<<endl;
    return 0;
}