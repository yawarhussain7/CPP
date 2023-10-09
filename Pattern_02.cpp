#include<iostream>
using namespace std;
int main()
{
    int rows,colums;
    cout<<"Enter the number of rows : ";
    cin>>rows;
    cout<<"Enter the number of colums : ";
    cin>>colums;

    for(int i = 1; i <= rows; i++)
    {
        for(int j = 1; j <=  colums; j++)
        {
            if(i == 1 || i == rows || j == 1 || j == colums)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
}