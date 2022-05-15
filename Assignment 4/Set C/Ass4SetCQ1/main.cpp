#include <iostream>

using namespace std;

class ARTICLE{
    private:
    public:
        int article_id,article_price,article_qty;
        char article_name[10];
        void accept(){
            cout<<"Enter article_id, article_price, article_qty, article_name"<<endl;
            cin>>article_id>>article_price>>article_qty>>article_name;
        }
        void show(){
            cout<<article_id<<endl<<article_price<<endl<<article_qty<<endl<<article_name<<endl;
            cout<<"------------------------------------------------------------------------------"<<endl;
        }

};

int main()
{
    int choise=0;
    int len=0;
    ARTICLE articles[10];
    cout<<"1.Accept details from n articles"<<endl;
    cout<<"2.Display"<<endl;
    cout<<"3.Display details of articles whose price exceeds 500"<<endl;
    cout<<"4.Display details of articles whose price exceeds 50"<<endl;

   while(choise!=10){
       cout<<"Enter Choise"<<endl;
        cin>>choise;
        switch(choise){
        case 1:
            cout<<"Enter no of article"<<endl;
            cin>>len;
            for(int i=0;i<len;i++){
                articles[i].accept();
            }
            break;
        case 2:
            for(int i=0;i<len;i++){
                articles[i].show();
            }
            break;
        case 3:
             for(int i=0;i<len;i++){
                if(articles[i].article_price>500){
                    articles[i].show();
                }
            }
            break;
        case 4:
            for(int i=0;i<len;i++){
                if(articles[i].article_qty>50){
                    articles[i].show();
                }
            }
            break;

    }
   }
    return 0;
}
