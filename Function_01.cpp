#include<iostream>
#include<math.h>
using namespace std;
bool Prime(int n);
int main()
{
    int starting,ending;
    cout<<"Enter the starting number : ";
    cin>>starting;
    cout<<"Enter the ending number : ";
    cin>>ending;

    for(int i = starting; i<= ending; i++)
    {
        if(Prime(i)==true)
        {
            cout<<" "<<i;
        }
    }
    
    return 0;
}
bool Prime(int n)
{
    for(int i = 2; i<=sqrt(n); i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }

    return true;
}