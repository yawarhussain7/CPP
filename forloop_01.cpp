#include <iostream>
using namespace std;
int main()
{
    int number, range;
    cout << "Enter a number that table is display on your screen : ";
    cin >> number;
    cout << "Enter the range of the table : ";
    cin >> range;

    for (int counter = 1; counter <= range ; counter++ )
    {
        cout<<number<<" x "<<counter<<" = "<<number*counter<<endl;
    }
    return 0 ;
}