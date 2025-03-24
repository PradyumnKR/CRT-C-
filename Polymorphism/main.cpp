#include<bits/stdc++.h>
using namespace std;



class Test{
    private:
        int a ;
        int b ;
    public:
        void setAB(int aa, int bb){
            a = aa;
            b = bb;
        }
        void setA(int aa){
            a = aa;
        }
        void setB(int bb){
            b = bb;
        }
        int getA(){
            return a;
        }
        int getB(){
            return b;
        }

    

};

int main(){
   // Test t1 ={10,20};  another method of inputting data in class variables;
    // t1.a = 20;
    // t1.b =40;
    Test t1;;


    t1.setA(10);
    t1.setB(20);

    cout << "Value of a = "<< t1.getA() << endl ;
    cout << "Value of b = "<< t1.getB() << endl ;


 
 return 0;
}