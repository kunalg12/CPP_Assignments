/*
    Define a class string to perform different operations.
    a.To find length of string
    b.To concatenate two strings.
    c.To reverse the string
    d.To compare two strings

*/
#include <iostream>

#include<iomanip>
#include <string.h>
#include <conio.h>
using namespace std;
class STRING
{
private:
    char str1[50], str2[50];

public:
    void setstr(void);
    void len(void);
    void concat(void);
    void rev(void);
    void cmp(void);
};

void STRING ::setstr(void)
{
    cout << "Enter first string : ";
    getchar();
    gets(str1);
    cout << endl;
    cout << "Enter second string: ";
    gets(str2);
    cout << endl;
}
void STRING ::len(void)
{
    cout << "The length of the first string is : " << strlen(str1) << endl;
    cout << "The length of the second string is : " << strlen(str2) << endl;
}
void STRING ::concat(void)
{
    cout << "The first string is : " << str1 << endl;
    cout << "The second string is : " << str2 << endl;
    cout << "Concat of two string is : " << strcat(strcat(str1, " "), strcat(str2, " ")) << endl;
}

void STRING ::rev(void)
{
    cout << "Enter first string : ";
    getchar();
    gets(str1);
    cout << endl;
    cout << "Your  string is : " << str1 << endl;
    cout << "Your Reverse String is : " << strrev(str1) << endl;
  
}
void STRING ::cmp(void)
{
    int i, count = 0;

    for (i = 0; i <= strlen(str1); i++)
    {
        if (str1[i] == str2[i])
        {
            count++;
            cout << str1[i];
        }
    }
    if (count <= 0)
    {
        cout << "String is not same" << endl;
        cout << count;
    }
    else
    {
        cout << "String is same" << endl;
        cout << count;
    }
}
int main()
{
    STRING S1;
    int opt;
    cout << setw(20) << setfill(' ') << "Enter 1. Find length of strings" << endl;
    cout << setw(20) << setfill(' ') << "Enter 2. Concat two string" << endl;
    cout << setw(20) << setfill(' ') << "Enter 3. Reverse string" << endl;
    cout << setw(20) << setfill(' ') << "Enter 4. Compare two strings" << endl;
    cin>>opt;
    switch(opt)
    {
        case 1: 
          S1.setstr(); S1.len();
          break;
        case 2: 
             S1.setstr(); S1.concat();
            break;
        case 3: 
              S1.rev();
            break;
        case 4:
             S1.setstr(); S1.cmp();
             break;
        case 5: 
            exit(0);
            break;
        default : 
            cout<<"Invalid Input";
            break;
   
    }
    return 0;
}