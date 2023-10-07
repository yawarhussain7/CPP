#include <iostream>
using namespace std;
int main()
{
    // Example no 1
    /*
    int i = 1;
     i = i++ + ++i;
    cout<<i<<"  ";
    */

    // Example no 2
    /*
    int i = 1;
     int j = 2;
     int k ;
     k = i + j + i++ + j++ + ++i + ++j;
    cout<<i<<" "<<j<<" "<<k<<" ";
     */

    // Example no 3
    /*
     int i = 0;
     i = i++ - --i + ++i - i--;
     cout<<" "<<i
    */

        // Example no 4
    /*
    int i = 1, j = 2, k = 3,m=0;
    m = i-- - j-- - k--;
    cout<<"i = "<<i<<endl;
    cout<<"j = "<<j<<endl;
    cout<<"k = "<<k<<endl;
    cout<<"m = "<<m<<endl;    
    */

//    Example no 5 
    int i = 10 ,j = 20, k = 0;
    k = i-- - i++ + --j - ++j + --i - j-- + ++i - j++;
    cout<<" i = "<<i<<endl;
    cout<<" j = "<<j<<endl;
    cout<<" k = "<<k<<endl;
    return 0;
}