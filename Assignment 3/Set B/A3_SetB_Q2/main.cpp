#include <iostream>

using namespace std;
class Rectangle1;
class Rectangle2{
    private:
        int length,width,area;
    public:
        void setData(int length,int width){
            this->length=length;
            this->width=width;
            this->area=area;
        }
        int Area(){
            return length*width;
        }
        friend void compare(Rectangle1 rectangle1,Rectangle2 rectangle2);
};
class Rectangle1{
    private:
        int length,width,area;
    public:
        void setData(int length,int width){
            this->length=length;
            this->width=width;
            this->area=area;
        }
        int Area(){
            return length*width;
        }
        friend void compare(Rectangle1 rectangle1,Rectangle2 rectangle2);
};
void compare(Rectangle1 rectangle1,Rectangle2 rectangle2){
    if(rectangle1.Area() >  rectangle2.Area()){
        cout<<"Rectangle1 is Greater"<<endl;
    }
    else if(rectangle1.Area()  <  rectangle2.Area()){
        cout<<"Rectangle2 is Greater"<<endl;
    }
    else{
        cout<<"Both are Same"<<endl;
    }
}
int main()
{
    Rectangle1 rectangle1;
    Rectangle2 rectangle2;
    rectangle1.setData(5,2);
    rectangle2.setData(5,3);
    compare(rectangle1,rectangle2);
    return 0;
}
