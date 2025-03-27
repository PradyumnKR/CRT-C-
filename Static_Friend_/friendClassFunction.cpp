#include<bits/stdc++.h>
using namespace std;
class one{
    private:
        int a ;
    public :
        int b ;
        friend class two; //this lets another class two to access private members of class one after creating its object.
};
class two{
    public:
     void fun(){
        one ob;
        ob.a = 10;
        cout<<ob.a<<endl;
    }
};
int main()
{
    two ob;
    ob.fun();
 return 0;
}