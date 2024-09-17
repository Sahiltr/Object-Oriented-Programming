#include <iostream>
using namespace std;

// Abstract base class
class Shape {
public:
    // Pure virtual function
    virtual double area() = 0;  // Every derived class must implement this function
};



// Derived class for Circle
class Circle : public Shape {
    double radius;
public:
    Circle(double r) : radius(r) {}
    
    // Overriding the pure virtual function
    double area() override {
        return 3.14159 * radius * radius;  // Area of a circle: π * r^2
    }
};



// Derived class for Rectangle
class Rectangle : public Shape {
    double length, width;
public:
    Rectangle(double l, double w) : length(l), width(w) {}
    
    // Overriding the pure virtual function
    double area() override {
        return length * width;  // Area of a rectangle: l * w
    }
};

int main() {
    // Create objects of derived classes
    Circle c(5.0);  // Circle with radius 5.0
    Rectangle r(4.0, 6.0);  // Rectangle with length 4.0 and width 6.0
    
    // Call the area() function on both objects
    cout << "Area of the circle: " << c.area() << endl;
    cout << "Area of the rectangle: " << r.area() << endl;
    
    return 0;
}
