#include<bits/stdc++.h>
using namespace std;
class Test{
    public :
        int a; 
        int b ; 
        Test(){ //default constructor
            a = 10 ;
            b = 20 ;
        }
};
int main()
{
 Test t1;
 cout<<"a : "<<t1.a<<" b : "<<t1.b<<endl;
 return 0;
}