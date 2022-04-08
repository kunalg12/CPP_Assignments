#include<iostream.h>
#include<conio.h>

class fact
{
	private:
	int num,fact,i;
	public:
	void factorial()
	{
		fact = 1;
		cout<<"Enter Number"<<endl;
		cin>>num;
		for( i = 1;i<=num;i++)
		{
			fact = fact*i;
		}
		cout<<fact;
	}



};
int main()
{
	clrscr();
	fact c;
	c.factorial();
	getch();
	return 0;
}