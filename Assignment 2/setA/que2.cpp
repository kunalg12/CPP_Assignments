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
    int addobj(DISTANCE obj1,DISTANCE obj2);
    void output(void);
};
void DISTANCE :: setData(void)
{
    cout<<"Enter feet and inches"<<endl;
    cin>>feet>>inches;

}
int DISTANCE :: addobj(DISTANCE obj1,DISTANCE obj2)
{
    feet = obj1.feet + obj2.feet;
    inches = obj1.inches+obj2.inches;
    feet = feet + (inches / 12);
	inches = inches % 12;

}
void DISTANCE :: output(void)
{
    cout<<"The distance of two object is : "<<feet<<" feet and "<<inches<<" inches";

}
int main()
{
    DISTANCE obj1,obj2;
    cout<<"For Object 1"<<endl;
    obj1.setData();
    cout<<"For Object 2"<<endl;
    obj2.setData();
    obj1.addobj(obj1,obj2);
    obj1.output();
    return 0;
}