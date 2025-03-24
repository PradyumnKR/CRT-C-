#include<bits/stdc++.h>
using namespace std;
class Test{
    public :
        int a; 
        int b ; 
        Test(int aa, int bb){ //parameterised constructor
            a = aa ;
            b = bb ;
        }
};
int main()
{
 Test t1(10,20);
 cout<<"a : "<<t1.a<<" b : "<<t1.b<<endl;
 return 0;
}