//Write a C++ program using inline function to find square root and  cuberoot of a number
#include<iostream>
#include<math.h>

#include<conio.h>
using namespace std;
class root
{
    private : 
    int number;

    public  : 
    void getdata(void);
    void sq(void);
     void cb(void);
};
 void root :: getdata(void)
{
    cout<<"Enter number"<<endl;
    cin>>number;
}
inline void root::sq(void)
{
    cout<<"The square root of the number is : "<<sqrt(number);
}
inline void root::cb(void)
{
    cout<<"The cube root of the number is : "<<cbrt(number);
}
int main()
{
    root c1;
    c1.getdata();
    c1.sq();
    c1.cb();
    return 0;
}
