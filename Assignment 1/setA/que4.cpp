#include<iostream.h>
#include<conio.h>
void main()
{
    int num1,num2;
    char operator; 
    cout<<"Enter first number : "<<endl;
    cin>>num1;
    cout<<"Enter second number : "<<endl;
    cin>>num2;
    cout<<"Enter ( + - * /) to perform operation: "<<endl;
    cin>>operator;
    switch(operator)
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
            cout<<"Enter valid operator"<<endl;
            break;
    }
}
