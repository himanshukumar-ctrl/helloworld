#include<iostream>
using namespace std;

int main()
{
    int age = 25;
    char grade = 'A';
   bool isPassed = true;
   float salary = 50000.50;

   cout<<age<<" "<<grade<<" "<<isPassed<<endl;
    cout << "size of int = " << sizeof(int) << " bytes" << endl;
    cout << "size of char = " << sizeof(char) << " bytes" << endl;
    cout << "size of bool = " << sizeof(bool) << " bytes" << endl;
    cout << "size of float = " << sizeof(float) << " bytes" << endl;
    
    float PI = 3.14159265358979323846;
    double PI2 = 3.14159265358979323846;

    cout<<"PI = "<<PI<<endl;
    cout<<"PI2 = "<<PI2<<endl;
    
    
    return 0;
}