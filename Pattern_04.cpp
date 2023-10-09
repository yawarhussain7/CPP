#include<iostream>
using namespace std;
int main()
{
    int rows,coloums;
    cout<<"Enter the range of rows : ";
    cin>>rows;
    cout<<"Enter the range of coloums : ";
    cin>>coloums;

    for(int i = 1; i<= rows; i++)
    {
        for(int j = 1; j <= coloums ; j++)
        {
            if(j <= rows - i)
            {
                cout<<"   ";
            }
            else
            {
                cout<<" * ";
            }
        }

        cout<<endl;
    }
    return 0;
}