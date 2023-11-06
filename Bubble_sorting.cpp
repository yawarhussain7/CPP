// Author: Yawar Hussain
#include<iostream>
using namespace std;

int main()
{
    int range;
    cout<<"Enter the range of array: ";
    cin>>range;

    int array[range];
    cout<<"Enter the elements of the array: "<<endl;
    for(int i = 0; i < range; i++)
    {
        cin>>array[i];
    }

    int iteration = 1;
    while (iteration < range)
    {
        for(int j = 0; j < range - iteration; j++)
        {
            if(array[j] > array[j + 1])
            {
                // Swap the elements if they are in the wrong order
                int temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
        iteration++;
    }

    cout<<"Sorted array: ";
    for(int i = 0; i < range; i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;

    return 0;
}
