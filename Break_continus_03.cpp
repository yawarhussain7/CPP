#include<iostream>
using namespace std;
int main()
{
    int start,end;
    cout<<"Enter the starting range of the number : ";
    cin>>start;
    cout<<"Enter the ending range of the number : ";
    cin>>end;

    for(int i = start ; i <= end; i++)
    {
        if(i%2==0)
        {
            continue;
        }
        else
        cout<<i<<"  ";
    }
    return 0;
}