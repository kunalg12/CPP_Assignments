#include<iostream.h>
#include<conio.h>
class max
{
	private:
	int a,b,c;
	public:
	void check()
	{
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
	}
};
int main()
{

	clrscr();
	max c;
	c.check();

	getch();
	return 0;
}