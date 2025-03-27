#include<bits/stdc++.h>
using namespace std;
class one{
    private :
        int a; 
    public : 
        int b; 
        friend void display( one &obj); //This lets the display() function use the private members of a class, without having the need to define it inside the class. 
        // syntax : friend return-type function-name();

};

void display( one &obj){ //we can pass object directly as an argument also. 
    obj.a = 10;
    cout<<obj.a<<endl;
}
int main()
{
    one o;
    display(o);
 
 return 0;
}