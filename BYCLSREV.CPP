#include<iostream.h>
#include<conio.h>
class rev
{
	private:
	int num,rev,i,a;
	public:
	void revnum()
	{
	   rev = 0;
	   cout<<"Enter number\n";
	cin>>num;
	for(i = 0;num>0;i++)
	{

		a = num%10;
	       rev = rev*10+a;
		num = num/10;


	}
	cout<<rev;
	}
};
int main()
{

	clrscr();

	rev c;
	c.revnum();


	getch();
	return 0;
}