#include<bits/stdc++.h>
using namespace std;
class Test{
    public:
        void sum(int a, int b){
            cout<<"First"<<endl;
            cout<<"Sum is "<<a+b<<endl;
        }
        void sum(int a, int b, int c){
            cout<<"Second"<<endl;
            cout<<"Sum is "<<a+b+c<<endl;
        }

        void sum(int a, float b){
            cout<<"Third"<<endl;
            cout<<"Sum is "<<a+b<<endl;
        }
        void sum(int a, double b){
            cout<<"Fourth"<<endl;
            cout<<"Sum is "<<a+b<<endl;
        }

        void sum(char a, char b){
            cout<<"Fifth"<<endl;
            cout<<"Sum is "<<a+b<<endl;

        }

};
int main()
{
    Test t1;
    t1.sum(10,20);
    t1.sum(10 ,20 ,40);
 return 0;
}

//Function overloading is a compile time overloading.
// It decides which function will run at compile time.
// Thats why it is called compile time polymorphism.
// It is called overloading as it is used to overload the functions.

// If return type of function is different then we cannot overload the function.
//Conditions to overload a function:
//     1. The name of the functions to be overloaded must be same.
//     2. The number of parameters in the functions to be overloaded must be different.
//     3. The data type of the parameters in the functions to be overloaded must be different.
//     4. The order of parameters in the functions to be overloaded must be different.
//     5. The functions to be overloaded must be in the same class.
//     6. The functions to be overloaded must be public.

