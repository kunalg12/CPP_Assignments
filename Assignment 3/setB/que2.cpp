/*
Write a C++ program to create two classes Rectangle1 and Rectangle 2. Compare area of both rectangles using friend function
*/
#include<iostream>
#include<conio.h>
using namespace std;
class Rectangle2;
class Rectangle1
{
    private:
    float length,breadth;
    public :
    void get(void);
    friend void area(Rectangle1,Rectangle2);
};
void Rectangle1 :: get(void)
{
    cout<<"Enter Rectangle 1 length : ";
    cin>>length;
    cout<<"Enter Rectangle 1 breadth : ";
    cin>>breadth;
}
class Rectangle2
{
    private:
    float length,breadth;
    public :
    void get(void);
    friend void area(Rectangle1,Rectangle2);
};
void Rectangle2 :: get(void)
{
    cout<<"Enter Rectangle 2 length : ";
    cin>>length;
    cout<<"Enter Rectangle 2 breadth : ";
    cin>>breadth;
}
void area(Rectangle1 one, Rectangle2 two)
{
    float area1 = one.length*one.breadth;
    float area2 = two.length*two.breadth;
    (area1>area2)? cout<<"Rectangle1 is Greater which has area about "<<area1:cout<<"Rectangle2 is Greater which has area about "<<area2;
}
int main()
{
    Rectangle1 rect1;
    Rectangle2 rect2;
    rect1.get();
    rect2.get();
    area(rect1,rect2);
    return 0;
}