//Write a C++ program to convert decimal number to hexadecimal
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;

int main()
{
     char hex[15] = {'1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
    char conv[15];
    int number,i,rem = 0,que = 0, counter = 0;
    cout<<"Enter number"<<endl;
    cin>>number;
    cout<<setw(25)<<"Decimal Number  : "<<number<<endl;
    for(i = 0;i<=number+2;i++)
    {
         rem = number % 16;
        // cout <<"rem : "<<rem<<endl;
        conv[counter] = hex[rem-1];
        counter++;

        que = number / 16;
        // cout<<"que : "<<que<<endl;
       
        number = number / 16;
        // cout<<"num : " <<number<<endl;

    }
   
    cout<<setw(23)<<"Hexadecimal Number   :";
    for(i = counter+1;i>=0;--i)
    {
        cout<<conv[i];
    }
  
    getch();
    return 0;
}