#include<iostream.h>
#include<conio.h>
int main()
{
	int a,b,c;
	clrscr();

	cout<<"Enter any three numbers\n";
	cout<<"a = ";
	cin>>a;
	cout<<"b = ";
	cin>>b;
	cout<<"c = ";
	cin>>c;
	if(a>b && a>c)
	{
		cout<<"A is Max";
	}
	else if(b>a && b>c)
	{
		cout<<"B is Max";
	}
	else if(c>a && c>b)
	{
		cout<<"C is Max";
	}
	getch();
	return 0;
}