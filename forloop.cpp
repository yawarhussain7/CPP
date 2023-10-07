#include<iostream>
using namespace std;
int main()
{
    int num,sum = 0;
    cout<<"Enter the any positive number : ";
    cin>>num;

    for(int counter = 0 ; counter <= num; counter++)
    {
        sum = sum + counter;
    }
    cout<<sum<<endl;

    return 0;
}