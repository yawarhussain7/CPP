#include<iostream>
using namespace std;
int main()
{
    int rows,coloums;
    cout<<"Enter the range of rows : ";
    cin>>rows;
    cout<<"Enter the range of coloums : ";
    cin>>coloums;

    for(int i = rows; i >= 1;i--)
    {
        for(int j = 1; j<= i; j++)
        {
            cout<<" * ";
        }   
            cout<<endl;
    }
    return 0;
}