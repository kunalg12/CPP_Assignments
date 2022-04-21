/*

Create a class named 'DISTANCE' with feet and inches as data members. 
The class has the following member function
a. To input distance
b. To output distance
c. To add two distance objects
Write a C++ program to create objects of DISTANCE class. Input two distance and output 
the sum.
*/
#include<iostream>
#include<conio.h>
using namespace std;
class DISTANCE
{
    private : 
    int feet ,inches;
    public  : 
    void setData(void);
    int addobj(DISTANCE obj1);
    void output(void);
};
void DISTANCE :: setData(void)
{
    cout<<"Enter feet and inches"<<endl;
    cin>>feet>>inches;

}
int DISTANCE :: addobj(DISTANCE obj1)
{
	DISTANCE temp;
	temp.feet = feet.obj1.feet;
	temp.inches = inches.obj1.inches;
	
    
    	return temp;
	

}
void DISTANCE :: output(void)
{
    cout<<"The distance of two object is : "<<feet<<" feet and "<<inches<<" inches";

}
int main()
{
    DISTANCE obj1,obj2,obj3;
    cout<<"For Object 1"<<endl;
    obj1.setData();
    cout<<"For Object 2"<<endl;
    obj2.setData();
	obj3 = obj1.add(obj(obj2));
	obj3.output();
    return 0;
}
