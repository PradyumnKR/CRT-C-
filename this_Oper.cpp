#include<bits/stdc++.h>
using namespace std;

class Test{
    public :
        int a;
        void setA(int a){
            this->a = a;
        }
        Test(){
            cout<<"Hello"<<endl;
        }
        ~Test(){
            cout<<"bye"<<endl;
        }
    
};
int main()
{
    Test t1; //constructor prints "Hello"
    Test *ptr = &t1; // pointer to object t1, we create a pointer to use this pointer
    t1.setA(10);
    cout << ptr->a << endl; // pointer to object t1, we use this pointer to access the object


    if(true){
        Test t2; // constructor prints "Hello" 

    }// destructor prints "bye" when t2 goes out of scope
    cout<<"Heyyyyy"<<endl; // this line is executed before the destructor of t2 is called

 return 0;
}// destructor prints "bye" when t1 goes out of scope