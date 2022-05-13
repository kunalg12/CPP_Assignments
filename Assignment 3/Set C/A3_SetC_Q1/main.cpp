#include <iostream>

using namespace std;

class ComplexNumber{
    private:
        int num1,num2;
    public:
        void setData(int num1,int num2){
            this->num1=num1;
            this->num2=num2;
        }
        friend void add(ComplexNumber complexnumber1,ComplexNumber complexnumber2);
};
void add(ComplexNumber complexnumber1,ComplexNumber complexnumber2){
    cout<<complexnumber1.num1+complexnumber2.num1<<" + "<<complexnumber1.num2+complexnumber2.num2<<"i"<<endl;
}

int main()
{
    ComplexNumber complexnumber1;
    ComplexNumber complexnumber2;
    complexnumber1.setData(5,2);
    complexnumber2.setData(3,2);
    add(complexnumber1,complexnumber2);
    return 0;
}
