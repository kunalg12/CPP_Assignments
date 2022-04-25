/*
Create a class Complex Number containing members as 
- real
-imaginary
Write a C++ program to calculate and display the sum of two complex numbers (Use friend function and return by object)
*/
#include<iostream>
#include<conio.h>
using namespace std;
class ComplexNumber
{
    private : 
    int real,imag;

    public  :
    void get(void) 
    {
        cout<<"Enter complex number"<<endl;
        cout<<"Enter Real number : ";
        cin>>real;  
        cout<<"Enter imaginary number : ";
        cin>>imag;
    }
    void display(void)
    {
        cout<<"Complex Number is  :  "<<real<<" + "<<imag<<"i"<<endl;
    }
    friend ComplexNumber addComplexNumber(ComplexNumber c1,ComplexNumber c2);
};
ComplexNumber addComplexNumber(ComplexNumber c1,ComplexNumber c2)
{
    ComplexNumber c3l;
    c1.real = c1.real+c2.real;
    c1.imag = c1.imag+c2.imag;
    c3l = c1;
    return c3l;
}
int main()
{
    ComplexNumber c1,c2,c3;
    c1.get();
    c2.get();
    c1.display();
    c2.display();
    c3 = addComplexNumber(c1,c2);
    c3.display();
    return 0;
}