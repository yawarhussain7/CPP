#include<iostream>
using namespace std;
int main()
{
    int saving ;
    cout<<"Enter your saving : ";
    cin>>saving;

    if(saving > 5000)
    {
        if(saving >= 10000)
        {
            cout<<"Road trip with Neha "<<endl;
        }
        else
        cout<<"Shopping with Neha "<<endl;
    }
    else if(saving < 3000)
    {
        cout<<"Rashmi"<<endl;
    
    }
    else
    cout<<"Friends"<<endl;
}