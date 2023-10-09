#include<iostream>
using namespace std;
int main()
{
    unsigned int  a = 4;   //       4 = 0100
    unsigned int  b = 6;   //       6 = 0110
    int c = 0;
    //Bitwise And Operator 
    c = a & b ;
    cout<<"a & b "<<" = "<<c<<endl;
    //Bitwise Or Operator               0100    ans = 4
    c = a | b;                      //  
    cout<<" a | b "<<" = "<<c<<endl;
     //Bitwise Not Operator         //  0110    ans = 6
    c =  ~ b;                       
    cout<<" ~b "<<" = "<<c<<endl; // 1001     ans = 6
    c = ~a;                         
    cout<<" ~a "<<" = "<<c<<endl; // 1011     ans = 11

     //Bitwise XOR Operator
    c = a ^ b;                      //0010      ans = 2
    cout<<"a ^ b "<<" = "<<c<<endl;  // 
     //Bitwise Left Shift Operator
    c = a << 2; 
    cout<<"a << 2 "<<" = "<<c<<endl;        //1000  ans = 8
     c = b >> 2;
    cout<<"b >> 2"<<" = "<<c<<endl;        // 1100 ans = 
    return 0;
}