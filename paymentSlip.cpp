
#include<iostream>
#include<iomanip>
using namespace std;
class product
{
    private:
    
    char productName[30];
    float price;
    float total;
    float quantity;
    public:
  
    void addProduct(void);
    void displaySlip(void);
  
};
void product :: addProduct(void)
{
    cout<<"Enter Product Name"<<endl;
    cin>>productName;
    cout<<"Enter Price"<<endl;
    cin>>price;
    cout<<"Enter Quantity"<<endl;
    cin>>quantity;
    total = price * quantity;
   
}
void product :: displaySlip(void)
{
    cout<<setw(15)<<productName<<setw(15)<<setprecision(3)<<price<<setw(15)<<quantity<<setw(15)<<setprecision(3)<<total<<endl;
}

int main()
{
    int i;
    product products[3];
    
    for(i = 0;i<=2;i++)
    {   

        products[i].addProduct();
        

    }
    cout<<setw(15)<<"Name"<<setw(15)<<setprecision(3)<<"Price"<<setw(15)<<"Quantity"<<setw(15)<<setprecision(3)<<"Total"<<endl;

    for(i = 0;i<=2;i++)
    {
        products[i].displaySlip();
    }
    return 0;
}
