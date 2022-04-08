#include<iostream.h>
#include<conio.h>
int main()
{
	int num,rev=0,i,a;
	clrscr();

	cout<<"Enter number\n";
	cin>>num;
	for(i = 0;num>0;i++)
	{

		a = num%10;
	       rev = rev*10+a;
		num = num/10;


	}
	cout<<rev;

	getch();
	return 0;
}