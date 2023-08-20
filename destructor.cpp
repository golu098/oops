#include<iostream>
using namespace std;

// Default constructor: No arguments, initializes members to default values
class DefaultConstructor {
public:
    int a, b;

    DefaultConstructor() {
        a = 20;
        b = 30;
    }

    ~DefaultConstructor() {
        cout << "DefaultConstructor destructor called" << endl;
    }
};

// Parameterized constructor: Takes arguments to initialize members
class ParameterizedConstructor {
public:
    int x, y;

    ParameterizedConstructor(int val1, int val2) {
        x = val1;
        y = val2;
    }

    ~ParameterizedConstructor() {
        cout << "ParameterizedConstructor destructor called" << endl;
    }
};

// Copy constructor: Creates a new object by copying values from an existing object
class CopyConstructor {
public:
    int data;

    CopyConstructor(int val) {
        data = val;
    }

    CopyConstructor(const CopyConstructor& other) {
        data = other.data;
    }

    ~CopyConstructor() {
        cout << "CopyConstructor destructor called" << endl;
    }
};

int main() {
    // Using the default constructor
    DefaultConstructor d;
    cout << "Default constructor output" << endl;
    cout << "Value of a: " << d.a << endl << "Value of b: " << d.b << endl;

    // Using the parameterized constructor
    ParameterizedConstructor p(10, 50);
    cout << "\nParameterized constructor output" << endl;
    cout << "Value of x: " << p.x << endl << "Value of y: " << p.y << endl;

    // Using the copy constructor
    CopyConstructor original(100);
    CopyConstructor copied = original; // Copy constructor is called here
    cout << "\nCopy constructor output" << endl;
    cout << "Value of copied data: " << copied.data << endl;

    return 0;
}
