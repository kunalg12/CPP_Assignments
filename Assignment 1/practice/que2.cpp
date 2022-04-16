//Write a C++ program to find maximum of 3 numbers.
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
	int num1,num2,num3,max;
	cout<<"Enter any three numbers"<<endl;
	cin>>num1>>num2>>num3;
	((num1>num2)&&(num1>num3))  ? max = num1 : ((num2>num3)&&(num2>num1))? max = num2 : max = num3;
	cout<<"The max is : "<<max;
	return 0;
}

//1.51.02