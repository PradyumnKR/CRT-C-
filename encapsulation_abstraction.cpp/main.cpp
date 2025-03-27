/*Encapsulation
Encapsulation is the bundling of data (attributes) and methods (functions) that operate on the data into a single unit, typically a class. It restricts direct access to some of the object's components and can prevent the accidental modification of data.

Here is an example of encapsulation in C++:*/

#include <iostream>
using namespace std;

class BankAccount {
private:
    double balance; // private variable

public:
    BankAccount(double initialBalance) {
        balance = initialBalance;
    }

    void deposit(double amount) {
        if (amount > 0) {
            balance += amount;
        }
    }

    void withdraw(double amount) {
        if (amount > 0 && amount <= balance) {
            balance -= amount;
        }
    }

    double getBalance() {
        return balance; // access to private variable
    }
};

int main() {
    BankAccount account(1000.0);
    account.deposit(500.0);
    account.withdraw(200.0);
    cout << "Current Balance: " << account.getBalance() << endl; // Output: Current Balance: 1300
    return 0;
}
/*Abstraction
Abstraction is the concept of hiding the complex implementation details and showing only the essential features of the object. It allows the user to interact with the object without needing to understand the underlying complexity.

Here is an example of abstraction in C++:*/

#include <iostream>
using namespace std;

class Shape {
public:
    virtual void draw() = 0; // pure virtual function
};

class Circle : public Shape {
public:
    void draw() {
        cout << "Drawing a Circle" << endl;
    }
};

class Square : public Shape {
public:
    void draw() {
        cout << "Drawing a Square" << endl;
    }
};

int main() {
    Shape* shape1 = new Circle();
    Shape* shape2 = new Square();

    shape1->draw(); // Output: Drawing a Circle
    shape2->draw(); // Output: Drawing a Square

    delete shape1;
    delete shape2;
    return 0;
}
/*Differences between Encapsulation and Abstraction
Definition:

Encapsulation: Bundles data and methods that operate on the data into a single unit (class) and restricts access to some components.
Abstraction: Hides the complex implementation details and shows only the essential features of the object.
Purpose:

Encapsulation: Protects the integrity of the data by restricting access and modifying it only through methods.
Abstraction: Simplifies the interface for the user by hiding unnecessary details.
Implementation:

Encapsulation: Achieved using access modifiers (private, public, protected).
Abstraction: Achieved using abstract classes and interfaces.
Focus:

Encapsulation: Focuses on the internal state of the object.
Abstraction: Focuses on the external behavior of the object.
These concepts are fundamental in object-oriented programming and help in designing robust and maintainable code.*/

