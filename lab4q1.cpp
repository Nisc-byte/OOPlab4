#include <iostream>
using namespace std;

class Polygon {
protected:
    float width, height;

public:
    void setDimensions(float w, float h) {
        width = w;
        height = h;
    }
};

class Rectangle : public Polygon {
public:
    float calculate_area() {
        return width * height;
    }

    float calculate_perimeter() {
        return 2 * (width + height);
    }
};

class Triangle : public Polygon {
public:
    float calculate_area() {
        return 0.5 * width * height;
    }

    float calculate_perimeter() {
        return 3 * width;
    }
};

int main() {
    Rectangle rect;
    Triangle tri;
    float w, h;

    cout << "Enter width and height of rectangle: ";
    cin >> w >> h;
    rect.setDimensions(w, h);
    cout << "Rectangle Area: " << rect.calculate_area() << endl;
    cout << "Rectangle Perimeter: " << rect.calculate_perimeter() << endl;

    cout << "\nEnter base and height of triangle: ";
    cin >> w >> h;
    tri.setDimensions(w, h);
    cout << "Triangle Area: " << tri.calculate_area() << endl;
    cout << "Triangle Perimeter: " << tri.calculate_perimeter() << endl;

    return 0;
}
