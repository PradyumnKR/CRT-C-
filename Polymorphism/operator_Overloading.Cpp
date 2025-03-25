#include<bits/stdc++.h>
using namespace std;
//Operator overloading is a compile time polymorphism.
// It is done when we want to use the operators for user defined data types as the operators are only designed to used in built in data types, since their functionality is only defined about them in the compiler. So if we want to use them to user defined data types then we have to define them ourselves.
// Operator overloading is used to give the meaning of operators to user defined data types.



// class Complex{
//     private:
//         int real; int img;
//     public: 
//         Complex(int r =0,int i = 0){real = r;img = i;}
//         Complex operator+(const Complex &t) {
//             Complex res;
//             res.real = real + t.real;
//             res.img = img + t.img;
//             return res;

//         }
//         void print(){
//             cout<<real<<" + "<<img<<"i"<<endl;
//         }

// };

 
//  int main(){
//     Complex c1(3,4);
//     Complex c2(2,5);
//     Complex c3 = c1+c2;
//     c3.print();
//  }

class Complex{
    private :
        int real;int img;

    public : 
        Complex(int r =0,int i=0){
            real =r ;
            img = i ;
        }
        Complex operator+(const Complex &t){
            Complex res;
            res.real = real + t.real;
            res.img = img + t.img;
            return res;
        }
        Complex operator-(const Complex &t){
            Complex res;
            res.real = real - t.real;
            res.img = img -t.img;
            return res;
        }
        void print(){
            cout<<real<<" + "<<img<<"i"<<endl;
        }
};

int main(){
    Complex c1(2,3);
    Complex c2(4,8);
    Complex c3 = c1+c2;
    c3.print();
    c3 = c3-c2;
    c3.print();
}

