#include<iostream>
using namespace std;
int fact(int n);
int main()
{
    int n,r;
    cout<<"Enter the value of n : ";
    cin>>n;
    cout<<"Enter the value of r : ";
    cin>>r;
    
    int result = (fact(n)/(fact(r)*fact(n - r)));
   
    clog<<"The value of n is : "<<n<<endl;
    cerr<<"The value of r is : "<<r<<endl;
    cout<<endl;
     cout<<"The value of nCr is: "<<result<<endl;
    return 0;
}
int fact(int n)
{
    int fact = 1;
    if(n == 1 || n == 0)
    {
        return fact;
    }
    else
    {
        for(int i = 2; i <= n; i++)
        {
            fact = fact*i;
        }
        return fact;
    }
}