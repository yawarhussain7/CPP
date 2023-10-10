#include<iostream>
using namespace std;
int main()
{

    int num;
    cout<<"Enter the number : ";
    cin>>num;
    int reverse_number;
    cout<<"Original Number : "<<num<<endl;
    while(num>0)
    {
        int last_digits = num%10;

        reverse_number = reverse_number*10 + last_digits;

        num = num/10;

    }

    cout<<"Reverse Number = "<<reverse_number<<endl;
}