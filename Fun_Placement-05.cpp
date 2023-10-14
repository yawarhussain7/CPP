#include<bits/stdc++.h>
using namespace std;

int Hexa_Deciamal_to_Decimal(string n);

int main()
{
    string num;
    cin>>num;
    cout<<Hexa_Deciamal_to_Decimal(num)<<endl;

    return 0;
}

int Hexa_Deciamal_to_Decimal(string n)
{
    int ans = 0;
    int pow = 1;
    int str  = n.size();

    for(int i = str - 1; i >= 0; i--)
    {
        if(n[i] >= '0' && n[i] <= '9')
        {
            ans = ans + pow*(n[i] - '0');
        }
        else if(n[i] >= 'A' && n[i] <= 'F')
        {
            ans = ans + pow*(n[i] - 'A' + 10);

        }
        pow = pow*16;
    }
    return ans;
}