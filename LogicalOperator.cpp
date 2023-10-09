#include<iostream>
using namespace std;
int main()
{
    int num ;
    cout<<"Enter the value of integer : ";
    cin>>num;

    if((num%2==0)&&(num%3==0))
    {
        cout<<num<<"    is Divisible both 2 and 3 "<<endl;
    }
    else if((num%2==0)||(num%3==0))
    {
        cout<<num<<"    is Not Divisible by both 2 and 3 "<<endl;
    }
    else
    cout<<num<<"    is not Divisible by both number "<<endl;

    return 0;
}