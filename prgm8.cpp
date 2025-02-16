
#include <iostream>
#include <cmath>
using namespace std;
class SHAPE 
{
public:
virtual void area() = 0;
virtual void perimeter() = 0;
};
class SQUARE : public SHAPE 
{
private:
float side;
public:
void getData() 
{
cout << "Enter side of square: ";
cin >> side;
}
void area() override 
{
cout << "Area of Square: " << side * side <<endl;
}
void perimeter() override
{
cout << "Perimeter of Square: " << 4 * side <<endl;
}
};
class RECTANGLE : public SHAPE 
{
private:
float length, breadth;
public:
void getData() 
{
cout << "Enter length of rectangle: ";
cin >> length;
cout << "Enter breadth of rectangle: ";
cin >> breadth;
}
void area() override 
{
cout << "Area of Rectangle: " << length * breadth <<endl;
}
void perimeter() override 
{
cout << "Perimeter of Rectangle: " << 2 * (length + breadth) <<endl;
}
};
class TRIANGLE : public SHAPE 
{
private:
float base, height, side1, side2, side3;
public:
void getData() 
{
cout << "Enter base of triangle: ";
cin >> base;
cout << "Enter height of triangle: ";
cin >> height;
cout << "Enter the lengths of the three sides of the triangle: ";
cin >> side1 >> side2 >> side3;
}
void area() override 
{
cout << "Area of Triangle: " << 0.5 * base * height <<endl;
}
void perimeter() override 
{
cout << "Perimeter of Triangle: " << side1 + side2 + side3 <<endl;
}
};

int main() 
{
SQUARE s;
RECTANGLE r;
TRIANGLE t;
s.getData();
s.area();
s.perimeter();
r.getData();
r.area();
r.perimeter();
t.getData();
t.area();
t.perimeter();
return 0;
}
