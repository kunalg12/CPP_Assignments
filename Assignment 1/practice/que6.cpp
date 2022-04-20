//Write a C++ program to check whether number is perfect
#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num , sum = 0, i;
	cout<<"Enter number"<<endl;
	cin>>num;
	for( i = 1 ; i<num; i ++)
	{
		if(num%i == 0)
		{
			sum = sum + i ;
		}
	}
	if( sum == num)
	{
		cout<<"The number is perfect"<<endl;
	}
	else
	{
		cout << " The number is not perfect"<<endl;
	}
	return 0;
}

//1.12.94