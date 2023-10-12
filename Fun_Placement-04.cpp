#include<bits/stdc++.h>
using namespace std;
int Binary_to_octal(int n);

int32_t main()
{
    int n;
    cin>>n;
    cout<<Binary_to_octal(n)<<endl;
}
int Binary_to_octal(int n)
{
    int x = 1;
    int octal = 0;

    while(n > 0)
    {
        int reminder = n % 10;
        n = n /10;
        octal  = octal + (x * reminder);
        x = x * 8;
    }
    return octal;
}