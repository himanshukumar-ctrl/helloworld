#include<iostream>
using namespace std;    

int main()
{
   
    cout<<( (3<6) && (5>2) )<<endl; // true
    cout<<( (3<6) && (5<2) )<<endl; // false
    cout<<( (3<6) || (5>2) )<<endl; // true
    cout<<( (3<6) || (5<2) )<<endl; // true
    cout<<( !(3<6) )<<endl; // false
    return 0;
}