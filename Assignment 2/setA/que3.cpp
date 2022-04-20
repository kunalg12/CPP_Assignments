/*

Write a C++ program to create a class District. having district_code, district_name, area_sqft,
population,literacy_rate. For displaying details use appropriate manipulators. The program should contain following
menu:
a. Accept details of n district
b. Display details of district
c. Display details of district having hightest literacy rate
d. Display details of district having least population.

*/
#include <iostream>
#include <iomanip>
#include <string.h>
#include <conio.h>
using namespace std;

class DISTRICT
{
private:
    int district_code;
    char district_name[30];
    float area_sqft, population, literacy_rate;

public:
    void setdata(int district_code1, char district_name1[30], float area_sqft1, float population1, float literacy_rate1);
    int maxliteracy(DISTRICT OBJ[],int n);
    int leastpopulat(DISTRICT OBJ[],int n);
    void display(void);
};
void DISTRICT ::setdata(int district_code1, char district_name1[30], float area_sqft1, float population1, float literacy_rate1)
{
    {
        district_code = district_code1;
        area_sqft = area_sqft1;
        population = population1;
        literacy_rate = literacy_rate1;

        strcpy(district_name, district_name1);
    }
}
void DISTRICT ::display(void)
{

    cout << endl;
    cout << setw(30) << setfill(' ') << "District Code : " << district_code << endl;
    cout << setw(30) << setfill(' ') << "District Name : " << district_name << endl;
    cout << setw(30) << setfill(' ') << "District area : " << area_sqft << endl;
    cout << setw(30) << setfill(' ') << "District population : " << population << endl;
    cout << setw(30) << setfill(' ') << "literacy rate : " << literacy_rate << endl;
    cout << endl;
}
int DISTRICT ::maxliteracy(DISTRICT OBJ[],int n)
{
    int i,j,max = 0;
    for(i = 0;i<n;i++)
    {
       for(j = 0;j<n;j++)
       {
           if(max < OBJ[i].literacy_rate and OBJ[i].literacy_rate > OBJ[j].literacy_rate)
           {
               max = OBJ[i].literacy_rate;
           }
       }
        
    }
      cout << endl;
    cout << setw(30) << setfill(' ') << "The Max Literacy rate District : " << endl;
    
    for(i = 0;i<n;i++)
    {
        if(OBJ[i].literacy_rate == max)
        {
            OBJ[i].display();
        }
    }
    return max;
}
int DISTRICT ::leastpopulat(DISTRICT OBJ[],int n)
{
    int i,j,least = 0;
    least = OBJ[0].population;
    for(i = 0;i<n;i++)
    {
       for(j = 0;j<n;j++)
       {
           if( least >OBJ[i].population)
           {
               least = OBJ[i].population;
               
                
           }
          
       }
        
    }
      cout << endl;
    cout << setw(30) << setfill(' ') << "The Least Population District : " << endl;
    
    for(i = 0;i<n;i++)
    {
        if(OBJ[i].population == least)
        {
            OBJ[i].display();
        }
    }
    return least;
}
int main()
{
    int n, i, district_code1;
    char district_name1[30];
    float area_sqft1, population1, literacy_rate1;
    int max = 0,least = 0;
    cout << "Enter how many district you want" << endl;
    cin >> n;
    DISTRICT obj1[n];

    for (i = 0; i < n; i++)
    {
        cout << "District code ";
        cin >> district_code1;

        cout << "District name ";
        cin >> district_name1;
        cout << "area ";
        cin >> area_sqft1;
        cout << "population ";
        cin >> population1;
        cout << "literacy_rate ";
        cin >> literacy_rate1;
        obj1[i].setdata(district_code1, district_name1, area_sqft1, population1, literacy_rate1);
    }
    
    for (i = 0; i < n; i++)
    {

        obj1[i].display();
    }

    max = obj1[0].maxliteracy(obj1,n);
    cout<<max;  
    least = obj1[0].leastpopulat(obj1,n);
    cout<<least;  

    return 0;
}