// Write a C++ program to print area of circle , square and rectangle using inline function
#include <iostream>
#include <math.h>
#include <conio.h>
using namespace std;
class area
{
private:
    float radius, length, breadth, side;

public:
    void setradi(float radi)
    {
        radius  = radi;
    }
    void setsid(float sid)
    {
        side  = sid;
    }
    void setlen(float len)
    {
        length  = len;
    }
    void setbreadth(float bre)
    {
        breadth  = bre;
    }
    inline float areaOfCircle()
    {
        return 3.14 * radius * radius;
    }
    inline float areaOfSquare()
    {
        return side * side;
    }
    inline float areaOfRectangle()
    {
        return length * breadth;
    }
};

int main()
{
    area a;
    int n;
    float r,s,l,b;
    while(n!=4)
    {
        cout<<"Enter 1. Area of Circle"<<endl
        <<"Enter 2. Area of Square"<<endl
        <<"Enter 3. Area of Rectangle"<<endl
        <<"Enter 4. Exit"<<endl;
        cin>>n;
        switch(n)
        {
            case 1: 
            {
                cout<<"Enter Radius of Circle"<<endl;
                cin>>r;
                a.setradi(r);
                cout<<"The area of circle is : "<<a.areaOfCircle()<<endl;

            }
            break;
            case 2:
            {
                cout<<"Enter Side of Square"<<endl;
                cin>>s;
                a.setsid(s);
                cout<<"The area of square is : "<<a.areaOfSquare()<<endl;
            }
            break;
            case 3:
            {
                cout<<"Enter Length and Breadth of rectangle"<<endl;
                cin>>l>>b;
                a.setlen(l);
                a.setbreadth(b);
                cout<<"The area of rectangle is : "<<a.areaOfRectangle()<<endl;
            }
            break;
            case 4:
            {
                exit(0);
            }
            break;
            default:cout<<"Invalid input";
            break;
        }
    }
    return 0;
}