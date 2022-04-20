/*2. Write a C++ program to print the pattern
A 
B C 
D E F 
G H I J
*/
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int num;
    char temp = 'A';
    int i,j;
    cout<<"Enter number";
    cin>>num;
    for(i = 1;i<=num;i++)
    {
        for(j = 1;j<=i;++j)
        {
            cout<<temp<<" ";
            ++temp;
        }
        cout<<endl;
    }
    return 0;
}
// 1.38.33