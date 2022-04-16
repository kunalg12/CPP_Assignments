/*
    Write a C++ program to print Floyd's triangle.

    1
    2 3
    4 5 6
    7 8 9 10

*/

#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    
    int num, temp = 1, i,j ;
    cout<<"Enter number"<<endl;
    cin>>num;
    for(i = 1; i <= num; i++)
    {
        for ( j = 1; j<= i; ++j)
        {
            cout<<temp<<" ";
            ++temp;
        }
        cout<<endl;
    }
    return 0;
}
//0.56.61