/*
Write a C++ program to create a class Jwellery with data members Jwellery_Code,Jwellery_Name,Jwellery_Price.
Write member functions to accept and display information and also display number of objects created for a class. (Use Static Data member and Static Member function).
*/
#include<iostream>
#include<iomanip>
#include<conio.h>
using namespace std;
class Jwellery
{
    private : 
    static int Jwellery_Code;
    static char Jwellery_Name[30];
    static float Jwellery_Price;
    public  :

     void get(void)
    {
        cout<<"Enter Jwellery Code"<<endl;
    cin>>Jwellery_Code;
    cout<<"Enter Jwellery Name"<<endl;
    cin>>Jwellery_Name;
    cout<<"Enter Jwellery Price"<<endl;
    cin>>Jwellery_Price;
    }
     void display(void)
    {
         cout<<setw(15)<<Jwellery_Code
        <<setw(15)<<Jwellery_Name
        <<setw(15)<<Jwellery_Price<<endl;
    }

};
int Jwellery:: Jwellery_Code;
char Jwellery:: Jwellery_Name[30];
float Jwellery:: Jwellery_Price;
int main()
{
    Jwellery j1,h2;
    j1.get();
    h2.get();
     cout<<setw(15)<<"Code"
        <<setw(15)<<"Name"
        <<setw(15)<<"Price"<<endl;
    h2.display();
    j1.display();
    return 0;
}