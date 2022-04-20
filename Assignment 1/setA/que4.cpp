// Write a C++ program using switch statement which accepts two integers and an operator as (+ - * /) and performs the corresponding operation and displays the result.
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
    int num1,num2;
    char ope; 
    cout<<"Enter first number : ";
    cin>>num1;
    cout<<"\nEnter second number : ";
    cin>>num2;
    cout<<"\nEnter operator ( + - * /) : ";
    cin>>ope;
    switch(ope)
    {
        case '+':
            cout<<num1<<" + "<<num2<<" = "<<num1+num2<<endl;
            break;
        case '-':
            cout<<num1<<" - "<<num2<<" = "<<num1-num2<<endl;
            break;
        case '*':
            cout<<num1<<" * "<<num2<<" = "<<num1*num2<<endl;
            break;
        case '/':
            cout<<num1<<" / "<<num2<<" = "<<num1/num2<<endl;
            break;
        default : 
            cout<<"Invalid Input"<<endl;
            break;
    }

    return 0;
}
// 3.11.46