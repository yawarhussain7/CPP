#include<iostream>
using namespace std;
int main()
{
    int saving ;
    cout<<"Enter your saving : ";
    cin>>saving;

    if(saving > 5000)
    {
        cout<<"Neha"<<endl;
    }
    else if(saving > 2000)
    {
        cout<<"Reshmi"<<endl;
    }
    else
    cout<<"Friends"<<endl;
    return 0;
}