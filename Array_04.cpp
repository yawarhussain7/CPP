// Time complexity is O(n)
#include<bits/stdc++.h>
using namespace std;

int linear_Search(int arr[],int range,int key_value)
{
    for(int i = 0; i < range;i++)
    {
        if(arr[i] == key_value)
        {
            return i;

        }
    
    }
    return -1;

}
int main()
{

    int range;
    cout<<"Enter the range of array : ";
    cin>>range;

    int arr[range];

    for(int i = 0; i < arr[range];i++)
    {
        cin>>arr[i];
    }

    int key ;
    cout<<"Enter the key value which you want to find in array : ";
    cin>>key;

    int result = linear_Search(arr,range,key);

    cout<<"Result is : "<<result<<endl;

}