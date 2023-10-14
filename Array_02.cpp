#include<bits/stdc++.h>

using namespace std;
int main()
{
    int n;
    cout<<"Enter the range of array : ";
    cin>>n;

    int array[n];
    //Get input from user 
    cout<<"Input "<<endl;
    for(int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    cout<<"OUt put"<<endl;
    //Display out put on the screen 
    for(int j = 0; j < n; j++)
    {
        cout<<" "<<array[j];
    }
    return 0;
}