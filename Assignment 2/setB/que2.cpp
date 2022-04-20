/*
Write a C++ program to define a class Metro with the following specifications : 
a. Metro No
b. Metro Name
c. No of Seats
d. Starting point
e. Destination

Write a menu driven program by using appropriate manipulators to 
a. Accept details of n metros
b. Display all metro details
c. Display details of metro from specified starting and ending destination by user.
*/
#include<iostream>
#include<iomanip>
#include<string.h>
#include<conio.h>
using namespace std;
class Metro
{
    private:
    int metroNo,No_of_Seats;
    char metroName[30],start[30],destination[30];
    public : 
    void getData(int metroNo1,int No_of_Seats1,char metroName1[30],char start1[30],char dest[30]);
    void display(void);
    void stend(Metro obj[],int n);

};
void Metro :: stend(Metro obj[],int n)
{
    int i;
    char starting[30],ending[30];
    cout<<"Enter starting point and destination point : ";
    cin>>starting>>ending;
    for(i = 0;i<n;i++)
    {
        if(strcmpi(start,starting)==0 && strcmpi(destination,ending)== 0)
        {
            obj[i].display();
            break;
        }
    }

}
void Metro::getData(int metroNo1,int No_of_Seats1,char metroName1[30],char start1[30],char dest[30])
{
    metroNo = metroNo1;
    No_of_Seats = No_of_Seats1;
    strcpy(metroName,metroName1);
    strcpy(start,start1);
    strcpy(destination,dest);

    
}
void Metro::display(void)
{
    cout<<"Metro No : "<<metroNo<<endl;
    cout<<"No of seats : "<<No_of_Seats<<endl;
    cout<<"Starting Point : "<<start<<endl;
    cout<<"Destination Point : "<<destination<<endl;
}

int main()
{
    int n;
    cout<<"Enter how many metro details you want to enter";
    cin>>n;
    Metro d[n];
    int metNo,Seats,i;
    char Name[30],start[30],dest[30];
   
    for(i = 0;i<n;i++)
    {
 cout<<"Enter Metro No and Seats : ";
    cin>>metNo>>Seats;
    cout<<"Enter Starting Point : ";
    cin>>start;
    cout<<"Enter Destination Point : ";
    cin>>dest;
         d[i].getData(metNo,Seats,Name,start,dest);
    }
    // for ( i = 0; i < n; i++)
    // {
    //     d[i].display();
    // }
    
    d[0].stend(d,n);
    
    return 0;
}