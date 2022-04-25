// Write a C++ program to create two classes DM and DB which stores the value of distance. DM stores distance in m and cm and DB stores distance in feet and inches. Write a program that can read value for the class objects and add one object of DM with other object of DB by usind friend function

#include<iostream>
#include<conio.h>
using namespace std;
class DB;

class DM
{
    private :
    float m ,cm;
    public : 
    void get(void)
    {
      m = cm = 2;
    }
    friend void add(DM c,DB b);
};
class DB
{
    private :
    float feet,inches;
    public : 
    void get(void)
    {
        feet = inches = 3;
    }
    friend void add(DM c,DB b);
};
void add(DM c,DB b)
{
    c.m = c.m+b.feet;
    c.cm = c.cm + b.inches;
    cout<<c.m<<endl;
    cout<<c.cm;
}
int main()
{
    DM c;
    DB b;
    c.get();
    b.get();
    add(c,b);
    return 0;
}