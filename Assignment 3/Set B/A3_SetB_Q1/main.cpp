#include <iostream>

using namespace std;
class DB;
class DM{

    private:
        int feet,inches;
    public:
        void setData(int feet,int inches){
            this->feet=feet;
            this->inches=inches;
        }
        friend void add(DB db,DM dm);
};
class DB{
    private:
        int meter,cm;
    public:
        void setData(int meter,int cm){
            this->meter=meter;
            this->cm=cm;
        }
        friend void add(DB db,DM dm);
};
void add(DB db,DM dm){
    cout<<db.meter+(dm.feet/3.28)<<" . "<<db.cm+(dm.inches/2.54)<<endl;
}
int main()
{
    DB db;
    DM dm;
    dm.setData(5,8);
    db.setData(10,3);
    add(db,dm);
    return 0;
}
