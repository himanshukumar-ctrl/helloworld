#include<iostream>
using namespace std;

int main()
{
    float pencil;
    float pen;
    float eraser;
    cout<<"Enter the price of pencil: ";
    cin>>pencil;
    cout<<"Enter the price of pen: ";
    cin>>pen;
    cout<<"Enter the price of eraser: ";  
    cin>>eraser;
    float total = pencil + pen + eraser;
    cout<<"Total price = "<<total<<endl;
    cin>>total;
    float bill = total + (total * 0.18);
    cout<<"Total bill = "<<bill<<endl;
    return 0;   
        
}