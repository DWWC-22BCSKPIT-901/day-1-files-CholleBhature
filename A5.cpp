#include <iostream>
#include <cmath> // For M_PI (value of pi)
using namespace std;

// Base class Shape with a pure virtual function getArea
class Shape
{
public:
    // Pure virtual function (makes this class abstract)
    virtual double getArea() const = 0;

    // Virtual destructor (good practice when using polymorphism)
    virtual ~Shape() {}
};

// Derived class Rectangle from Shape
class Rectangle : public Shape
{
private:
    double length, breadth;

public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    // Override getArea for Rectangle
    double getArea() const override
    {
        return length * breadth;
    }
};

// Derived class Circle from Shape
class Circle : public Shape
{
private:
    double radius;

public:
    Circle(double r) : radius(r) {}

    // Override getArea for Circle
    double getArea() const override
    {
        return M_PI * radius * radius;
    }
};

// Derived class Triangle from Shape
class Triangle : public Shape
{
private:
    double base, height;

public:
    Triangle(double b, double h) : base(b), height(h) {}

    // Override getArea for Triangle
    double getArea() const override
    {
        return 0.5 * base * height;
    }
};

int main()
{
    // Create objects for each shape
    Rectangle rect(5.0, 3.0);
    Circle circ(4.0);
    Triangle tri(6.0, 4.0);

    // Use polymorphism to calculate areas
    Shape *shape1 = &rect;
    Shape *shape2 = &circ;
    Shape *shape3 = &tri;

    // Output the area of each shape
    cout << "Area of Rectangle: " << shape1->getArea() << endl;
    cout << "Area of Circle: " << shape2->getArea() << endl;
    cout << "Area of Triangle: " << shape3->getArea() << endl;

    return 0;
}
