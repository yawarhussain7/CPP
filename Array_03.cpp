#include<bits/stdc++.h>
#include<climits>

using namespace std;

int main()
{
    int maxNo = INT_MIN ,minNo = INT_MAX;
    int n ;
   
    cout<<"Enter the range of array : ";
    cin>>n;

     int array[n];
    
    cout<<"Input of Array "<<endl;
     for(int i = 0; i < n; i++)
     {
        cin>>array[i];
     }
     cout<<"Output of Array"<<endl;
     for(int j = 0; j < n; j++)
     {
        maxNo = max(maxNo, array[j]);           //build in function
        // if(array[j] > maxNo )
        // {
        //     maxNo = array[j];
        // }

        // else if(minNo < array[j])
        // {
        //     minNo = array[j];
        // }
        
        minNo = min(minNo, array[j]);           //build in function

     }

    cout<<"MaxNO = "<<maxNo<<endl;
    cout<<"MinNo = "<<minNo<<endl;
    return 0;
}