#include<bits/stdc++.h>
using namespace std;
// single level inheritance
class base{
    private : 
        int a ;
        int b ;
    public : 
        void setA(int aa){
            a = aa;
        }
        void setB(int bb){
            b = bb;
        }
        int getA(){
            return a ;
        }
        int getB(){
            return b;
        }
};

class Derived:public base{
    public:
        base obj;
        void displayAB(){
            cout<<"A : "<<getA()<<endl;
            cout<<"B : "<<getB()<<endl;
        }
};
int main()
{
    Derived  *obj = new Derived();
    obj->setA(10);
    obj->setB(20);
    obj->displayAB();
 
 return 0;
}