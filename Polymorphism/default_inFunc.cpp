#include<bits/stdc++.h>
using namespace std;
class Test{
    public :
        void sum(int a, int b){
            cout << "Sum is : "<< a+b << endl;
        }
        void sum2(int a=0,int b=0,int c=0){
            cout << "Sum is : "<< a+b+c << endl;
        }
}; 
int main()
{
  Test t1;
  t1.sum2(3,5,8);
 return 0;
}