
   #include <iostream>
using namespace std;

class Shape {
protected:
    double length;
    double width;

public:
    void setDimensions(double l, double w) {
        length = l;
        width = w;
    }

    virtual double calculateArea() {
        return length * width;
    }
};

class Rectangle : public Shape {
public:
    double calculateArea() override {
        return length * width;
    }
};

int main() {
    Rectangle rectangle;
    rectangle.setDimensions(5.0, 3.0);

    cout << "Area of rectangle: " << rectangle.calculateArea() << endl;
    return 0;
}    