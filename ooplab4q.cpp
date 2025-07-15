#include <iostream>
#include <cmath>
using namespace std;

class Polygon {
protected:
    double width, height;

public:
    void setDimensions(double w, double h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Polygon {
public:
    double area() {
        return width * height;
    }

    double perimeter() {
        return 2 * (width + height);
    }
};

class Triangle : public Polygon {
public:
    double area() {
        return 0.5 * width * height;
    }

    double perimeter() {
        
        double hypotenuse = sqrt(width * width + height * height);
        return width + height + hypotenuse;
    }
};


int main() {
    Rectangle rect;
    Triangle tri;

    double width, height;

    cout << "Enter width and height of rectangle: ";
    cin >> width >> height;
    rect.setDimensions(width, height);
    cout << "Rectangle Area: " << rect.area() << endl;
    cout << "Rectangle Perimeter: " << rect.perimeter() << endl;

    // Input for triangle
    cout << "\nEnter base and height of triangle: ";
    cin >> width >> height;
    tri.setDimensions(width, height);
    cout << "Triangle Area: " << tri.area() << endl;
    cout << "Triangle Perimeter (assuming right-angled): " << tri.perimeter() << endl;

    return 0;
}
		
