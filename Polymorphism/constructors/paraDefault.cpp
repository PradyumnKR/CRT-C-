#include<bits/stdc++.h>
using namespace std;
class Test{
    public :
        int a; 
        int b ; 
        Test(int aa=0, int bb=0){ //parameterised constructor, which will run with both with and without arguments
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