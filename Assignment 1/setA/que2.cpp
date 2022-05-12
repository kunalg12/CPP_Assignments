#include<iostream.h>
#include<conio.h>
void main()
{
    int len,i,j;
    char temp = 'A';
    cout<<"Enter number";
    cin>>len;
    for(i=1;i<=len;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
}
