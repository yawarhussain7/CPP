//  this program is print all the number except the number which is divisible by 3 
// the range of the number is given from user 
#include<iostream>
using namespace std;
int main()
{
    int range;
    cout<<"Enter the number range : ";
    cin>>range;

    for(int counter = 1; counter <= range; counter++)
    {
        if(counter%3==0)
        {
            continue;
        }
        else
        cout<<counter<<" ";
    }

    return 0;
}