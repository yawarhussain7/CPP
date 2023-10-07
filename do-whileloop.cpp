#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;

    do
    {
        cout<<num<<endl;
        cout<<"Enter negative number for terminating loop : ";
        cin>>num;
    } while (num > 0);
    
}