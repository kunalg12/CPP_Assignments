#include <iostream>

using namespace std;

class PRINT{
    public:
    void print(int number){
        cout<<number<<endl;
    }
    void print(char* charcters){
        while(*charcters!=NULL){
            cout<<*charcters;
            charcters++;
        }
        cout<<endl;
    }
    void print(int len,char* charcters){
        for(int i=0;i<len;i++){
            if(*charcters!=NULL){
                cout<<*charcters;
                charcters++;
            }
        }
        cout<<endl;
    }
};

int main()
{
   PRINT Print;
   Print.print(3);
   Print.print("rakshit");
   Print.print(3,"rakshit");
}
