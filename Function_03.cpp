#include<iostream>
using namespace std;
int fact(int n)
{
    int first = 1;
    int fact = 1;
    if(n == 1 || n == 0)
    {
        return first;
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
int main()
{
    int num;
    cout<<"Enter your number : ";
    cin>>num;
    int result = fact(num);
    cout<<"The factorial of "<<num<<"   is : "<<result<<endl;
    return 0;
}