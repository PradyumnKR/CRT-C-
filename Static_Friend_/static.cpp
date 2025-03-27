//use case of static , count the no. of objects made of the class

//Static function can only use static variables in its scope and working 

#include<bits/stdc++.h>
using namespace std;
class Test{
    public : 
        int a; 
        static int x ; // we cannot initialize static data member even with constructor.
        //static int x = 10;// we cannot initialize static data member in class definition
        // Test(){
        //     a = 10;
        //     x =30;
        // }
        void fun(){
            x++;
        }

};
int Test ::x = 10; // we can initialize static data member in global scope
int main()
{
    Test ob; 
    cout<<ob.x<<endl;
    ob.fun();
    cout<<ob.x<<endl;
    Test ob1;
    cout<<ob1.x<<endl;
    ob1.fun();
    cout<<ob1.x<<endl;
    cout<<ob.x<<endl; // all these will access the same copy of x no matter what object we use.
 return 0;
}


// we can also print x using scope resolution 
// cout<< Test :: x <<endl;