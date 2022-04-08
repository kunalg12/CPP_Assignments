#include<iostream.h>
#include<conio.h>
int main()
{
	int i,fact = 1,a;
	clrscr();
	cout<<"Enter number\n";
	cin>>a;
	for(i = 1;i<=a;i++)
	{
		fact = fact*i;
	}
	cout<<fact;
	getch();
	return 0;
}