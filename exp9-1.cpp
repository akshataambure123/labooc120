#include <iostream>
#include <cmath>

const double PI = 3.14159;

// Base class
class Shape {
public:
    // Pure virtual function to calculate area
    virtual double calculateArea() const = 0;

    // Pure virtual function to calculate perimeter
    virtual double calculatePerimeter() const
    {
        return 2*PI;
    }

    // Virtual destructor
    virtual ~Shape() {}
};

// Circle class
class Circle : public Shape 
{
private:
    double radius;

public:
    // Constructor for Circle
    Circle(double rad) : radius(rad) {}

    // Calculate area of circle
    double calculateArea() const override {
        return PI * pow(radius, 2);
    }

    // Calculate perimeter of circle
    /*double calculatePerimeter() const override {
        return 2 * PI * radius;
    }*/
};

// Rectangle class
class Rectangle : public Shape {
private:
    double length;
    double width;

public:
    // Constructor for Rectangle
    Rectangle(double len, double wid) : length(len), width(wid) {}

    // Calculate area of rectangle
    double calculateArea() const override {
        return length * width;
    }

    // Calculate perimeter of rectangle
    double calculatePerimeter() const override {
        return 2 * (length + width);
    }
};

// Triangle class
class Triangle : public Shape {
private:
    double side1;
    double side2;
    double side3;

public:
    // Constructor for Triangle
    Triangle(double s1, double s2, double s3)
        : side1(s1), side2(s2), side3(s3) {}

    // Calculate area using Heron's formula
    double calculateArea() const override {
        double s = (side1 + side2 + side3) / 2;

        return sqrt(s * (s - side1) *
                    (s - side2) * (s - side3));
    }

    // Calculate perimeter of triangle
    double calculatePerimeter() const override {
        return side1 + side2 + side3;
    }
};

// Main function
int main() 
{

   
    //Shape s;
    // Create objects of different shapes
    Circle circle(7.0);
    Rectangle rectangle(4.2, 8.0);
    Triangle triangle(4.0, 4.0, 3.2);

    // Display Circle details
    std::cout << "Circle: " << std::endl;
    std::cout << "Area: "
              << circle.calculateArea() << std::endl;
    std::cout << "Perimeter: "
              << circle.calculatePerimeter() << std::endl;

    // Display Rectangle details
    std::cout << "\nRectangle: " << std::endl;
    std::cout << "Area: "
              << rectangle.calculateArea() << std::endl;
    std::cout << "Perimeter: "
              << rectangle.calculatePerimeter() << std::endl;

    // Display Triangle details
    std::cout << "\nTriangle: " << std::endl;
    std::cout << "Area: "
              << triangle.calculateArea() << std::endl;
    std::cout << "Perimeter: "
              << triangle.calculatePerimeter() << std::endl;

    return 0;
}
