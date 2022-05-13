#include <iostream>
#include<math.h>

using namespace std;


class ROOT{

    private:
        int number;
    public:
        void setNumber(int number){
            this->number=number;
        }
        inline void squareRoot(){
            cout<<" The Square Root of a Number "<<number<<" is "<<sqrt(number)<<endl;
        }
        inline void cubeRoot(){
            cout<<" The Cube Root of a Number "<<number<<" is "<<cbrt(number)<<endl;
        }

};

int main()
{
    ROOT root;
    root.setNumber(16);
    root.squareRoot();
    root.cubeRoot();
    return 0;
}
