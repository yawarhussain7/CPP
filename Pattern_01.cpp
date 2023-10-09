#include<iostream>
using namespace std;
int main()
{
    int row,colum ;
    cout<<"Enter the range of rows : ";
    cin>>row;
    cout<<"Enter the range of colums : ";
    cin>>colum;

    for(int i = 1; i <= row; i++)
    {
        for(int j = 1; j <= colum; j++)
        {
            cout<<" * ";
        }
        cout<<endl;
    }

    return 0;
}