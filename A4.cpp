#include <iostream>
#include <cmath>
using namespace std;

// Function to calculate the area of a circle
double calculateArea(double radius)
{
    return M_PI * radius * radius; // M_PI is the value of pi (π)
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width)
{
    return length * width;
}

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height)
{
    return 0.5 * base * height;
}

int main()
{
    double radius, length, width, base, height;

    // Calculating the area of a circle
    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Area of the circle: " << calculateArea(radius) << endl;

    // Calculating the area of a rectangle
    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;

    // Calculating the area of a triangle
    cout << "Enter the base and height of the triangle: ";
    cin >> base >> height;
    cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;

    return 0;
}
