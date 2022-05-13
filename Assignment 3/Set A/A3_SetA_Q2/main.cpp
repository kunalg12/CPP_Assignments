#include <iostream>
#include<math.h>

using namespace std;
class AREA{

    public:
      inline void areaOfCircle(){
          int radius;
          cout<<"Enter radius "<<endl;
          cin>>radius;
          cout<<"Area of a Circle is "<<3.14*(sqrt(radius))<<endl;
      }
      inline void areaOfSquare(){
          int side;
          cout<<"Enter Side "<<endl;
          cin>>side;
          cout<<"Area of a Square is "<<side*side<<endl;
      }
      inline void areaOfRectangle(){
          int length,width;
          cout<<"Enter Length and Width "<<endl;
          cin>>length>>width;
          cout<<"Area of a Rectangle is "<<length*width<<endl;
      }
};
int main()
{
    AREA area;
    area.areaOfCircle();
    area.areaOfRectangle();
    area.areaOfSquare();
    return 0;
}
