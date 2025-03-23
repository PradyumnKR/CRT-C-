#include<bits/stdc++.h>
using namespace std;
class Test{
    private:
        int a ;
        int b ;
    public:
        void setA(int aa){
            a = aa ;
        }
        void setB(int bb){
            b = bb ;
        }
        void displayA(){
            cout<<"A : "<<a<<endl;
        }
        void displayB(){
            cout<<"B :"<<b<<endl;
        }
        void displayALL(){
            displayA();
            displayB();
        }
        int getA(){
            return a ;   
        }
        int getB(){
            return b ;
        }
};
int main()
{
  Test t1;
  t1.setA(5);
  t1.setB(10);
  t1.displayALL();
 return 0;
}