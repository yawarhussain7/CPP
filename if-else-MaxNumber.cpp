// This program get 3 value from user and print the biggest number on your screen 
#include<iostream>
using namespace std;
int main()
{
    int num1,num2,num3;
    cout<<"Enter the value of number 01 : ";
    cin>>num1;
    cout<<"Enter the value of number 02 : ";
    cin>>num2;
    cout<<"Enter the value of number 03 : ";
    cin>>num3;

    if(num1 > num2)
    {
        if(num1 > num3)
        {
            cout<<num1<<"   is greatest number "<<endl;
        }
        else
        cout<<num3<<"   is greatest number "<<endl;
    }
    else 
       cout<<num2<<"   is greatest number "<<endl;
    return 0;
}