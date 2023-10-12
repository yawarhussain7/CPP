//Author : Yawar Hussain
// this program convert the binary number into Decimal number 
#include<bits/stdc++.h>

using namespace std;
int Binary_to_Decimal(int x);

int main()
{
    int num;
    cout<<"Enter the binary number : ";
    cin>>num;

    cout<<Binary_to_Decimal(num)<<endl;
    return 0;
}

int Binary_to_Decimal(int n)
{
    int ans  = 0;
    int x = 1;
    while(n > 0)        // 1010
    {
        int y = n % 10;     // 1010 % 10  = 0 | 101 % 10 = 1 | 10%10 = 0    | 1%10 = 1
        ans = ans + x * y;  // 0 + 1 * 0 =  0 | 0 + 2 * 1 = 2| 2 + 4*O = 2  | 2 + 8 * 1 = 10
        x = x * 2;          // 1*2 = 2        | 2 * 2 = 4    | 4 * 2 = 8    | 8 * 2 = 16
        n = n / 10;         // 1010/10 = 101  | 101/10 = 10  | 10/10 = 1    | 1/10 = 0
    }
    return ans;
}

/*
   while(n > 0)        // 1101
    {
        int y = n % 10;     // 1101 % 10  = 1 | 110 % 10 = 0 | 11%10 = 1    | 1%10 = 1
        ans = ans + x * y;  // 0 + 1 * 1 =  1 | 1 + 2 * 0 = 1| 1 + 4*1 = 5  | 5 + 8 * 1 = 13
        x = x * 2;          // 1*2 = 2        | 2 * 2 = 4    | 4 * 2 = 8    | 8 * 2 = 16
        n = n / 10;         // 1101/10 = 110  | 110/10 = 11  | 11/10 = 1    | 1/10 = 0
    }
*/