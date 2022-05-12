#include <iostream.h>
#include <conio.h>
void main()
{
    
    int len, i,j ,temp = 1;
    cout<<"Enter number"<<endl;
    cin>>len;
    for(i = 1; i <= len; i++)
    {
        for ( j = 1; j<= i; ++j)
        {
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
}
