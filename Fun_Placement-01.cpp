// This function  print the sum of n number 
#include<bits/stdc++.h>

using namespace std;
int sum(int n );
int main()
{
    int num;
    cout<<"Enter the any positive number : ";
    cin>>num;
    cout<<sum(num)<<endl;
    return 0;
}
int sum(int n )
{
    int ans = 0;
    for(int i = 0 ;i <= n;i++)
    {
        ans += i;
    }
    return ans;
}