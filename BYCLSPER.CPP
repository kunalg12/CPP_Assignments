#include<iostream.h>
#include<conio.h>
class perfect
{
	private:
	int num,sum,i;
	public:
	void perfectnum()
	{
		sum = 0;
			cout<<"Enter Number"<<endl;
	cin>>num;
	for(i = 1;i<num;i++)
	{
		if(num%i == 0)
		{
			sum = sum+i;
		}

	}

	if(sum == num)
	{

		cout<<"Number is perfect"<<endl;
	}
	else
	{
		cout<<"Number is not perfect"<<endl;
	}
	}
};
int main()
{

	clrscr();
	perfect c;
	c.perfectnum();
	getch();
	return 0;
}
