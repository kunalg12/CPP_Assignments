#include<iostream.h>
#include<conio.h>
int main()
{
	int num1,num2,num3;
	clrscr();
	cout<<"Enter first number\n";
	cin>>num1;
	cout<<"Enter second number\n";
	cin>>num2;
	cout<<"Enter third number\n";
	cin>>num3;
	if(num1>num2&&num1>num3)
	{
		cout<<num1<<" is Maximum";
	}
	else if(num2>num1&&num2>num3)
	{
		cout<<num2<<" is Maximum";
	}
	else if(num3>num2&&num3>num1)
	{
		cout<<num3<<" is Maximum";
	}
	getch();
	return 0;
}