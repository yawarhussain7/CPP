//Author Yawar Hussain
//Selection Sorting
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int range;
    cout<<"Enter the range of array : ";
    cin>>range;

    int arr[range];
    cout<<"Enter the vlaues of array : ";
    for(int i = 1; i <= range;i++)
    {
        cin>>arr[i];
    }

    for(int i = 1; i <= range; i++)
    {
        for(int j = 1; j <= range; j++)
        {
            if(arr[i] < arr[j])
            {
                int temp;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout<<"Sorted"<<endl;
    for(int j = 1; j <= range ; j++)
    {
        cout<<arr[j]<<" ";
    }
    cout<<endl;

    return 0;
}