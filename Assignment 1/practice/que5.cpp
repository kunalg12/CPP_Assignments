// Write a C++ program to reverse a number

#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
	int rev = 0, rem = 0 , i,num1;
	cout<<"Enter number"<<endl;
	cin>>num1;
	for(i = 0;i<=num1+1;i++)
	{
		rem = num1%10;
		rev = rev*10 + rem;
		num1 = num1/10;
	}
	cout<<"The reverse number is : "<<rev;
	return 0;
}

//1.20.32