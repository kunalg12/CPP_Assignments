// Write a C++ program to print right oriented right angled pyramid
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
 
int main()
{
    int num,i,j,temp=1;
    cout<<"Enter number";
    cin>>num;
    for(i = 1;i<=num;i++)
    {
        cout<<setw(num*2-i)<<setfill(' ');
        for(j = 1;j<= i;++j)
        {
            cout<<temp;
            ++temp;
        }
        cout<<endl;
    }
    return 0;
}