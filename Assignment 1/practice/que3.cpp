//Write a C++ program to check if number is even or odd.
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
	int num1;
	cout<<"Enter number"<<endl;
	cin>>num1;
	if(num1%2 == 0)
	{
		cout<<"The number is even"<<endl;
	}
	else if(num1%2 == 1)
	{
		cout<<"The number is odd"<<endl;
	}
	return 0;
}
//1.00.79