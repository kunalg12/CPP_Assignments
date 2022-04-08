#include<iostream.h>
#include<conio.h>
int main()
{
	int a;
	clrscr();
	cout<<"Enter number\n";
	cin>>a;
	 if(a == 0)
	{
		cout<<"number is zero";
	}
	else if(a%2 == 1)
	{
		cout<<"number is Odd";
	}
	else
	if(a%2 == 0)
	{
		cout<<"Number is Even";
	}



	getch();
	return 0;
}