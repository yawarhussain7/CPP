#include<bits/stdc++.h>
using namespace std;

int Binary_Search(int arr[],int range_of_array,int key_value)
{
    int starting_search = 0;
    int ending_search = range_of_array;
    
    while(starting_search <= ending_search)
    {
        int mid = starting_search + ending_search /2;

        if(arr[mid] == key_value)
        {
            return mid;
        }
        else if(arr[mid] > key_value)
        {
            ending_search = mid -1;
        }
        else if(arr[mid] < key_value)
        {
            starting_search = mid + 1;
        }

    }
    return -1;
}

int main()
{
    cout<<"********* Binary Search **************"<<endl;
    int range;
    cout<<"Enter the range of Array : ";
    cin>>range;
    int arr[range];
    for(int i = 0; i < range; i++)
    {
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key value which you want to Search in this Array : ";
    cin>>key;

    cout<<Binary_Search(arr,range,key)<<endl;

    return 0;
}