#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int range;
    cout<<"Enter the range of triabgle : ";
    cin>>range;

    for(int i = 0; i<=range; i++)
    {
        for(int j = 0 ;j<=i;j++)
        {
            cout<<" "<<fact(i)/(fact(j)*fact(i-j));
        }
        cout<<endl;
    }
    return 0;
}
int fact(int n)
{
    int factorial = 1;
    for(int  i = 2; i <= n;i++)
    {
        factorial = factorial * i;
    }
    return factorial;
}