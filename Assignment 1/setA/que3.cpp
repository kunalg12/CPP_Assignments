// Write a C++ program to generate multiplication table

#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
 
int main()
{
    int num,i;
    cout<<"Enter number you want multiplication of : "<<endl;
    cin>>num;
    for(i = 1;i<=10;i++)   
    {
        cout<<num<<" X "<<i<< " = "<<num*i<<endl;
    }
    return 0;
}
// 1.18.54