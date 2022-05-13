#include <iostream>

using namespace std;

class jwellery{
    private:
        int jwell_code;
        float jwell_price;
        char jwell_name[10];
    public:
        static int noOfJwell;
        void setData(){
            cout<<"Enter jwell_code, jwell_price,jwell_name"<<endl;
            cin>>jwell_code>>jwell_price>>jwell_name;
            noOfJwell++;
        }
        void showData(){
            cout<<"jwell_code : "<<jwell_code<<endl<<"jwell_price : "<<jwell_price<<endl<<"jwell_name : "<<jwell_name<<endl;
        }
};
int jwellery::noOfJwell;
int main()
{
    jwellery jwells[2];
    for(int i=0;i<2;i++){
        jwells[i].setData();
    }
    cout<<"Total jwelleries are "<<jwellery::noOfJwell;
    return 0;
}
