#include<iostream>
using namespace std;
int main()
{
    int number ;
    cout<<"Enter the number : ";
    cin>>number;
    int i ;
    for(i= 2; i< number ; i++)
    {
        if(number%2 == 0)
        {
            cout<<"Non Prime number "<<endl;
                break;
        }
    }
    if(i == number)
    {
        cout<<"Prime Number"<<endl;
    }
}