// this program get the number and range from user and print table of that number 
#include<iostream>
using namespace std;
int main()
{
    int number,range,counter=1;
    cout<<"Enter the number which table is print on your screen : ";
    cin>>number;
    cout<<"Enter the range of the table : ";
    cin>>range;

    while(counter <= range)
    {
        cout<<number<<" x "<<counter<<" = "<<number*counter<<endl;
        counter++;
    }
    return 0;
}