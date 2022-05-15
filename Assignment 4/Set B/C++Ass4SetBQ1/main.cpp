#include <iostream>

using namespace std;

class STUDENT{
    private:

        int rollno;
        int marks;
    public:
        void accept(int rollno,int marks){
            this->rollno=rollno;
            this->marks=marks;
        }
        int maximum(int num1,int num2){
            return (num1>num2)?num1:num2;
        }
        void maximum(STUDENT students[],int len){
            cout<<"maximum(STUDENT students[],int len)"<<endl;
            int max=students[0].marks;
            for(int i=1;i<len;i++){
                if(students[i].marks>max){
                    max=students[i].marks;
                }
            }
            cout<<"The Max is "<<max<<endl;
        }
        void maximum(STUDENT students[],int len,int limit){
            cout<<"maximum(STUDENT students[],int limit,int len)"<<endl;
           for(int i=1;i<len;i++){
                if(limit<students[i].marks){
                    cout<<"Roll No is "<<students[i].rollno<<endl;
                    cout<<"Marks is "<<students[i].marks<<endl;
                    cout<<"-----------------------------------------------"<<endl;
                }
            }
        }
};

int main()
{
    int len,rollno,marks;
    cout<<"Enter the Students Number"<<endl;
    cin>>len;
    STUDENT students[len];
    for(int i=0;i<len;i++){
        cout<<"enter rollno and marks"<<endl;
        cin>>rollno>>marks;
        students[i].accept(rollno,marks);
    }

    cout<<"maximum(int,int)  : "<<students[0].maximum(3,4)<<endl;
    students[0].maximum(students,sizeof(students));
    students[0].maximum(students,sizeof(students),3);

}
