#include <iostream.h>
#include <string.h>
#include <conio.h>
class STRING
{
    private:
        char str1[10], str2[10];

    public:
        void setstr()
        {
            cout << "Enter first string : ";
            getchar();
            cin>>str1;
            cout << endl;
            cout << "Enter second string: ";
            cin>>str2;
        }
        void len()
        {
            cout << "The Length of the First string is : " << strlen(str1) << endl;
            cout << "The Length of the Second string is : " << strlen(str2) << endl;
        }
        void concat()
        {
            cout << "Concatenated string is : " << strcat(strcat(str1, " "), strcat(str2, " ")) << endl;
        }

        void rev()
        {
            cout << "Enter first string : ";
            getchar();
            gets(str1);
            cout << endl;
            cout << "Your  string is : " << str1 << endl;
            cout << "Your Reverse String is : " << strrev(str1) << endl;

        }
        void cmp()
        {
            int i, count = 0;
            if(strlen(str1)!=strlen(str2)){
                cout<<"String is not same"<<endl;
            }
            else{
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
        }
};


void main()
{
    STRING strinOperation;
    int option;
    S1.setstr();
    cout << "Enter 1. Find length of strings" << endl;
    cout << "Enter 2. Concat two string" << endl;
    cout << "Enter 3. Reverse string" << endl;
    cout << "Enter 4. Compare two strings" << endl;
    cin>>opt;    
    switch(option)
    {
        case 1: 
          strinOperation.len();
          break;
        case 2: 
            strinOperation.concat();
            break;
        case 3: 
             strinOperation.rev();
            break;
        case 4:
             strinOperation.cmp();
             break;
        case 5: 
            exit(0);
            break;
        default : 
            cout<<"Invalid Input";
            break;   
    }
}
