#include<bits/stdc++.h>
using namespace std;
class Test{
    public :
        int a ;
       int *ptr ;
        Test(){
            a =10;
            ptr = new int(20);
        }
        

};

class Test2{
    public : 
    int a ;
    int*ptr;
    Test2(){
        a = 10;
        ptr = new int(20);
    }
    Test2(const Test2 &ob){ //if we dont use "&" then it is "CALL BY VALUE" so we are creating a new copy of the object, and the to create a new copy , we call a copy contructor again, so it will be infinite recursion, since the new copy constructor will again take it as a call by value and hence again call the copy constructor and so on.

        //we put const so the values of the object THAT WE PASSED IN THE ARGUMENTS CANNOT BE CHANGED

        a = ob.a;
        ptr = new int(*ob.ptr);
    }

    //by pointer 
    //Test2( const Test *ob){
    //    a = ob->a ;
    //    ptr = new int ( *ob->ptr );
    //}
};
int main()
{
    // we want to copy values of t1 to t2 object
 Test t1;
 t1.a = 100;

 Test2 ob1;
 Test2 ob2(ob1);
 *(ob1.ptr) = 1200;
 cout<<*ob1.ptr<<" value of ob1"<<endl;

 cout<<*(ob2.ptr)<<" value of ob2"<<endl;


 //Test t2;
 //t2.a = t1.a // one method of manually copying the value of t1 to t2

 //Test t2 = t1; //

 Test t2(t1); // this call the copy constructor

 //copy constructor does shallow copy, so same memory location is copied in both objects, which means if we do any change in t1 pointers memory location so it will be reflected in t2 object also

 // If we don't want to do shallow copy then we have to do deep copy, which means we have to manually copy the values or create our own copy constructor

 
 return 0;
}