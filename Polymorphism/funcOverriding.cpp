#include<bits/stdc++.h>
using namespace std;
class base{
    public:
       // void whoami(){// right now the fucntion is getting over-ridden by the derived class function with a 49-50 priority.
            // To make sure that the base class function is given lowest priority we can use the virtual keyword.
             virtual void whoami(){ //this virtual makes it so the priority of this function will always be lowest so when we call whoami() in the derived class then it will be derived class function.
            cout<<"base"<<endl;
        }
};
class derived: public base{
    public:
        void whoami(){
            cout<<"derived"<<endl;
        }
};
int main()
{
    
    
    base *obj = new derived(); //without virtual Keyword it is printing "base" even though memory is being pointed at derived class
    obj->whoami();
 return 0;
}




// Pointer Declaration: base *obj declares a pointer obj of type base. This means that obj can point to any object of type base or any derived class of base.

// Object Creation: new derived() creates an instance of the derived class. This instance is allocated on the heap.

// Pointer Assignment: The pointer obj is assigned the address of the newly created derived object. Even though obj is of type base*, it is pointing to an object of type derived.

// Method Call: When obj->whoami() is called, it invokes the whoami method. However, since the whoami method in the base class is not declared as virtual, the method that gets called is the one in the base class, not the one in the derived class. This is known as static binding.

// Output: As a result, the output will be "base" instead of "derived", even though obj is pointing to an instance of derived.

// To achieve dynamic binding (where the method of the derived class is called), the whoami method in the base class should be declared as virtual. This allows the program to determine at runtime which method to invoke based on the actual object type that obj points to.

// If you want to see the effect of using the virtual keyword, you can modify the whoami method in the base class as follows:

// virtual void whoami() {
//     cout << "base" << endl;
// }
// With this change, calling obj->whoami() would output "derived" as expected.