//2. Write a C++ program to calculate following series: (1) + (1+2)+(1+2+...+n);
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
    int num , sum = 0, temp = 0, i;
    cout<<"Enter num"<<endl;
    cin>>num;
    for( i = 0; i<= num; i++)
    {
        sum = sum + i;
        temp += sum;
    }
    cout << "The Total summation of series is : "<<temp;
    return 0;
}
//1.20.31