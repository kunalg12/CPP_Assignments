#include<iostream.h>
#include<conio.h>
class Cylinder{
    private : 
    float radius,height;

    public  : 
        void setradius(float radius)
        {
            this.radius = radius;
        }
        void setheight(float height)
        {
            this.height = height;
        }
        float volume()
        {
            float volume = 3.14*(radius*radius)*height;
            return volume;
        }
        float area()
        {
            float Area = (2*3.14*rad*height)+(2*3.14*rad*rad);
            return Area;
        }
};

void main()
{
    Cylinder cylinder;
    float radius,height,volume,area;
    cout<<"Enter radius and Height"<<endl;
    cin>>radius>>height;
    cylinder.setradius(radius);
    cylinder.setheight(height);
    volume = cylinder.volume();
    area   = cylinder.area();
    cout<<"Volume : "<<volume<<endl;
    cout<<"Area : "<<area<<endl;
}
