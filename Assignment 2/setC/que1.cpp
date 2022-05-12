#include<iostream.h>
#include<string.h>
#include<conio.h>
class employee
{
    private :
    int empno,basic,da,hra,allowances; 
    char name[30];
    public :   
        void accept(int empno,int basic,char name[30])
        {
            strcpy(this.name,name);
            this.empno = empno;
            this.basic = bas;
            da = 0.25*bas;
            hra = 800;
            allowances = basic+hra+da;
        }
        void display()
        {
            cout<<"Employee No : "<<empno<<endl;
            cout<<"Base Pay : "<<basic<<endl;
            cout<<"HRA : "<<hra<<endl;
            cout<<"DA : "<<da<<endl;
            cout<<"Allowance : "<<allowances<<endl;

        }
};

void main()
{
    employee e1;
    int emp_no,basic;
    char name[30];
    cout<<"Enter Employee No, Employee Name and Base Pay : ";
    cin>>emp_no>>name>>basic;
    e1.accept(id,bas,name);
    e1.display();  

}
