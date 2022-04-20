/*
Create a class for different departments in a college containing data members as Dept_Id,
Dept_Name, Establishment_year, No_of_Faculty, No_of_students. Write a C++ program with
following functions :
a. To accept 'n' Department details
b. To display department details of a specific Department
c. To display department details according to a specified establishment year
d. To display department details in descending order of number of faculty


*/
#include <iostream>
#include <string.h>
#include <conio.h>
using namespace std;
class departments
{
private:
    int Dept_Id, Establishment_year, No_of_Faculty, No_of_students;
    char Dept_Name[30];

public:
    void getData(int Dept_Id, int Establisnment_year, int No_of_Faculty, int No_of_students, char Dept_Name[30]);
    void display();
    void departmentDetails(departments obj[], int n);
    void departmentDetailsByEstYear(departments obj[], int n);
    void decendingOrderFaculty(departments obj[], int n);
};
void departments::decendingOrderFaculty(departments obj[], int n)
{
    int i, j;
    departments temp;

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            if (obj[i].No_of_Faculty > obj[j].No_of_Faculty)
            {
                temp = obj[i];
                obj[i] = obj[j];
                obj[j] = temp;
            }
        }
    }
    for (i = 0; i < n; i++)
    {
        obj[i].display();
    }
}
void departments::departmentDetails(departments obj[], int n)
{
    int i;
    char dept[30];
    cout << "Enter Depart Name : ";
    cin >> dept;
    for (i = 0; i < n; i++)
    {
        if (strcmpi(dept, obj[i].Dept_Name) == 0)
        {
            obj[i].display();
        }
    }
}
void departments::departmentDetailsByEstYear(departments obj[], int n)
{
    int i, year;
    cout << "Enter Year : ";
    cin >> year;
    for (i = 0; i < n; i++)
    {
        if (year == obj[i].Establishment_year)
        {
            obj[i].display();
        }
    }
}
void departments::getData(int Dept_Id1, int Establisnment_year1, int No_of_Faculty1, int No_of_students1, char Dept_Name1[30])
{
    Dept_Id = Dept_Id1;
    Establishment_year = Establisnment_year1;
    No_of_Faculty = No_of_Faculty1;
    No_of_students = No_of_students1;
    strcpy(Dept_Name, Dept_Name1);
}
void departments::display()
{
    cout << endl;
    cout << "Depart Id : " << Dept_Id << endl;
    cout << "Establisbh year" << Establishment_year << endl;
    cout << "No of faculty" << No_of_Faculty << endl;
    cout << "No of students" << No_of_students << endl;
    cout << "Department Name" << Dept_Name << endl;
    cout << endl;
}
int main()
{
    int n, i;
    int id, year, faculty, students;
    char name[30];
    cout << "Enter how many department details you want to enter" << endl;
    cin >> n;

    departments d1[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter id";
        cin >> id;
        cout << "Enter year";
        cin >> year;
        cout << "Faculty";
        cin >> faculty;
        cout << "students";
        cin >> students;
        cout << "name";
        cin >> name;
        d1[i].getData(id, year, faculty, students, name);
    }
    for (i = 0; i < n; i++)
    {
        d1[i].display();
    }
    d1[0].departmentDetails(d1, n);
    d1[0].departmentDetailsByEstYear(d1, n);
    d1[0].decendingOrderFaculty(d1, n);
    return 0;
}