#include<iostream.h>
#include<conio.h>
int main()
{
	int num,rev = 0,i,temp;
	clrscr();
	cout<<"Enter number\n";
	cin>>num;
	for(i=0;num>0 ;i++)
	{
		temp = num%10;
		rev = rev*10+temp;
		num = num/10;

	}
	cout<<rev;
	getch();
	return 0;
}