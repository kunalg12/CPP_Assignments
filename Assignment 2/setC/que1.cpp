/*
Write a C++ program to create a class employee having empno, name, basic, da, hra, allowances.
Write necessary member functions to accept and display details of employee. And generate a payslip
using appropriate manipulators for formatted display.
*/

#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;
class emp
{
    private :
    int empno,basic,da,hra,allowances; 
    char name[30];
    public :   
    void getData(int no,int bas,char name1[30]);
    void display(void);
};
void emp :: getData(int no,int bas,char name1[30])
{
    empno = no;
    basic = bas;
    da = 0.25*bas;
    hra = 800;
    allowances = basic+hra+da;
    strcpy(name,name1);
}
void emp ::display(void)
{
    cout<<setw(15)<<"Employee No : "<<empno<<endl;
    cout<<setw(15)<<"Basic Salary : "<<basic<<endl;
    cout<<setw(15)<<"Hra : "<<hra<<endl;
    cout<<setw(15)<<"DA : "<<da<<endl;
    cout<<setw(15)<<"Allowance : "<<allowances<<endl;
    
}
int main()
{
    int id,bas;
    char name[30];
    cout<<"Enter Emp No : ";
    cin>>id;
    cout<<"Enter Emp Name : ";
    cin>>name;
    cout<<"Enter Basic Salary : ";
    cin>>bas;

    emp e1;
    e1.getData(id,bas,name);
    e1.display();
   
    return 0;
}