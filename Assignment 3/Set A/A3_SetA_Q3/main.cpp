#include <iostream>

using namespace std;
class B;
class A{
    private:
        int number;
    public:
        void setData(int number){
            this->number=number;
        }
        friend void add(A a,B b);
};
class B{
    private:
        int number;
    public:
        void setData(int number){
            this->number=number;
        }
        friend void add(A a,B b);
};
void add(A a,B b){
    cout<<"The Addition is : "<<a.number+b.number<<endl;
}
int main()
{
    A a;
    B b;
    a.setData(80);
    b.setData(90);
    add(a,b);
    return 0;
}
