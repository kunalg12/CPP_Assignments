#include<iostream.h>
#include<iomanip.h>
#include<conio.h>
int main()
{
	clrscr();
	cout<<setfill('*');
	cout<<"Hello"<<ends<<"world";
	cout<<endl<<"10000"<<setw(5)<<endl;
	cout<<endl<<"1000"<<setw(5)<<endl;
	cout<<endl<<"100"<<setw(5)<<endl;

	cout<<endl<<"1000"<<setw(5)<<endl;
	cout<<endl<<"100"<<setw(5)<<endl;
	cout<<endl<<"10"<<setw(5)<<endl;
	cout<<setfill(' ');
	cout<<setprecision(2)<<float(10)/3;

	getch();
return 0;

}