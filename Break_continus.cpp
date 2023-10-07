#include<iostream>
using namespace std;
int main()
{
    
    int pocket_money = 2000;
    for(int check = 1; check <= 30; check++)
    {
        if(check%2==0)
        {
            continue;
        }
    
        if(pocket_money <= 0)
        {
            cout<<"You cannot go outside "<<endl;
                   break;
        }
        
        cout<<"You can go outside "<<endl;
        pocket_money = pocket_money - 300;
    }
}