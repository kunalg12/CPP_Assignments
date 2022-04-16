/*
    Write the definition for a class called Cylinder that contains data members radius and 
    height. The class has the following member functions : 
    a. void setradius(float) to set the radius of data member
    b. void setheight(float) to set the height of data member
    c. float volume() to calculate and return the volume of the cylinder
    d. float area() to calculate and return the area of the cylinder

    write a C++ program to create two cylinder objects and display each cylinder and its area
    and volume

*/
#include<iostream>
#include<conio.h>
using namespace std;
class Cylinder{
    private : 
    float rad,height;

    public  : 
    void setradius(float);
    void setheight(float);
    float volume();
    float area();
};
void Cylinder :: setradius(float radi)
{
    rad = radi;
}
void Cylinder :: setheight(float hei)
{
    height = hei;
}
float Cylinder :: volume()
{
    float vol = 3.14*(rad*rad)*height;
    return vol;
}
float Cylinder :: area()
{
    float A = (2*3.14*rad*height)+(2*3.14*rad*rad);
    return A;
}
int main()
{
    Cylinder cyl;
    float radi,hei,volume,area;
    cout<<"Enter radius and Height"<<endl;
    cin>>radi>>hei;
    cyl.setradius(radi);
    cyl.setheight(hei);
    volume = cyl.volume();
    area   = cyl.area();
    cout<<"Volume : "<<volume<<endl;
    cout<<"Area   : "<<area<<endl;
    return 0;
}