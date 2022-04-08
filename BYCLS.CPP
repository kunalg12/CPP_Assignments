#include<iostream.h>
#include<conio.h>
class evenOdd
{
	private:
	int num;
	public:
	void check()
	{
		cout<<"Enter number"<<endl;
		cin>>num;
		if(num%2 == 1)
		{
			cout<<"Number is odd"<<endl;
		}
		else
		{
			cout<<"Number is even"<<endl;
		}


	}
};
int main()
{
	clrscr();
	evenOdd c;

	c.check();
	getch();
	return 0;
}