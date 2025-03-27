#include<bits/stdc++.h>
using namespace std;
class one; //forward declaration of class one;
class Two{
    public :
        // void display1(one &ob){
        //     ob.a = 10 ;
        //     cout<<ob.a<<endl;
        // }                       // Its getting error because display1() is inside class Two and it is trying to access private member of class one. Since it is not global function then its not able to make it freind. 
       void display1(one &ob);
};
class one{
    private : 
        int a;
    public :
        int b ;
        // friend void display1(one &ob);
        friend void Two :: display1(one &ob); //we have to use scope resolution to access the function inside the class two, so compiler knows which function to call.

};
void Two :: display1(one &ob){
    ob.a =10;
    cout<<ob.a<<endl;
}

int main()
{
  Two ob;
  one a;
  ob.display1(a);
 return 0;
}