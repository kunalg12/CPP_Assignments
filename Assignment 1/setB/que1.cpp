// 1. Write a C++ program to display factors of a number
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
    int num, i;
    cout<<"Enter number"<<endl;
    cin>>num;
        cout<<"The factors are : ";
    for(i = 1;i<=num;i++)
    {
        if(num%i == 0)
        {
            cout<<i<<" , ";
        }
    }
    return 0;
}
// 1.01.0