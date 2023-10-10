#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter the any positive number : ";
    cin>>num;

    bool flag = 0;
    for(int i = 2;i < num; i++)
    {
        if((num%i)==0)
        {
            cout<<"Non-Prime Number "<<endl;
            flag = 1;
            break;
        }
    }

    if(flag == 0)
    {
        cout<<"Prime number "<<endl;
    }
}