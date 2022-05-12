#include<iostream.h>
#include<conio.h>
class DISTANCE
{
    private : 
    	int feet ,inches;
    public  : 
	void setData(void)
	{
	    cout<<"Enter feet and inches"<<endl;
	    cin>>feet>>inches;
	}
	int addobj(DISTANCE obj1)
	{
		DISTANCE temp;
		temp.feet = feet.obj1.feet;
		temp.inches = inches.obj1.inches;
		return temp;
	}
	void output(void)
	{
	    cout<<"Total is : "<<feet<<" feet and "<<inches<<" inches";
	}
};
void main()
{
    DISTANCE obj1,obj2,obj3;
    obj1.setData();
    obj2.setData();
    obj3 = obj1.add(obj(obj2));
    obj3.output();
}
