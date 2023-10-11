#include<iostream>
using namespace std;
void fibo(int n)
{
    int first = 0 ,second = 1, next =0;
        for(int i = 0 ; i <= n;i++)
        {
            cout<<" "<<first;
            next = first + second;
            first = second;
            second = next;
            
        }
      
}
int main()
{
    int num;
    cout<<"Which term of fibonacci you want to print : ";
    cin>>num;
    fibo(num);
}