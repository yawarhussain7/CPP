#include<iostream>
using namespace std;
int main()
{
    

    for(int check = 1; check <= 30; check++)
    {
        if(check%2==0)
        {
            continue;
        }
        else
        cout<<"You can go outside "<<endl;
        break;
    }
}