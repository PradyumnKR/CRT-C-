#include<bits/stdc++.h>
using namespace std;
class book{
    private:
        string name;
        int sno;
    public :
        void put_Name(){

            cout<<"Enter Book's name :";
            cin>>name;
        }
        void put_SNO(){
            cout<<"Enter Book's SNO:";
            cin>>sno;
        }
        string get_Name(){
            return name;
        }
        int get_SNO(){
            return sno;
        }
};

class index: public book{
    private :
        int chap;
    public: 
        void put_Chap(){
            cout<<"Enter the no. of Chapters in the book:";
            cin>>chap;
        }
        int get_Chap(){
            return chap ; 
        }
};

class publisher :public book{
    private : 
        string name ;
        string location ;
    public :
        void put_Name(){
            cout<<"Enter Publisher's Name : ";
            cin>>name; 
        }
};
int main()
{
    book obj1;
    obj1.put_Name();
    cout<<"Name of the book is : "<<obj1.get_Name()<<endl;
 return 0;
}