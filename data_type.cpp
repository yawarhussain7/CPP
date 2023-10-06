#include <iostream>
#include<limits.h>
using namespace std;
int main()
{
    int a; // decleration
    a = 4; // inilization
    cout << "THe size of int is : " << sizeof(a) << endl;
    float c;
    cout << "THe size of float is : " << sizeof(c) << endl;
    bool b;
    cout << "THe size of bool is : " << sizeof(b) << endl;
    char d;
    cout << "The size of char is : " << sizeof(d) << endl;
    short int sh;
    cout << "The size of short int is : " << sizeof(sh) << endl;
    long int li;
    cout << "THe size of long int is : " << sizeof(li) << endl;
    //integer 
    cout<<"The maxmum  range of int is : "<<INT_MAX<<endl;
    cout<<"THe minimum range of int is : "<<INT_MIN<<endl;
    cout<<"The maxmum range of short int is : "<<SHRT_MAX<<endl;
    cout<<"The maxmum range of short int is : "<<SHRT_MIN<<endl;
    cout<<"The maxmum range of Long int is : "<<LONG_MAX<<endl;
    cout<<"The minimum range of long  int is : "<<LONG_MIN<<endl;
    cout<<"The maxmum range of Unsigned is : "<<UINT_MAX<<endl;
    cout<<"The minimumrange of Unsigned is : "<<INT_MIN<<endl;
    //characters 
    cout<<"The maxmum range of Char is : "<<CHAR_MAX<<endl;
    cout<<"The minimum range of Char is : "<<CHAR_MIN<<endl;
    //float
    cout<<"The maxmum range of Unsigned  Long LONG is : "<<ULLONG_MAX<<endl;

    return 0;
}