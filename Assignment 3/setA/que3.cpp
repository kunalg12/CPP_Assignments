//Write a C++ program to subtract two integer numbers of two different classes using friend function.
#include<iostream>
#include<conio.h>
using namespace std;
class c2; // fordward declaration
class c1
{
    private :
        int num1;
    public  :
    void set()
    {
        num1 = 3;
    }
    friend void add(c1 num,c2 numb); //friend function 

};
class c2
{
    private : 
        int num2;
    public  :
    void set()
    {
        num2 = 0;
    }
    friend void add(c1 num,c2 numb); //friend function
};
void add(c1 num,c2 numb)
{
    num.num1 = numb.num2 - num.num1;
    cout<< num.num1;
}
int main()
{
    c1 c;
    c2 cc;
    c.set();
    cc.set();
    add(c,cc);
    return 0;
}