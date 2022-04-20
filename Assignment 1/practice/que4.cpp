//Write c++ program to find factorial of number
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
	int num1, fact = 1 , i;
	cout<<"Enter number"<<endl;
	cin>>num1;
	for(i = 1;i<=num1;i++)
	{
		fact = fact * i;
		
	}
	cout<<fact;
	return 0;
}
//0.45.04