#include<iostream>
using namespace std;
#define pi 3.145926
class Shape
{
    public:
        Shape();
        ~Shape();
        virtual void calculateArea(double )=0;
};

/*
  class Circle final:public Shape
  final keyword is used when I don't want class derived
  to be inherited further
  class Circle final: public Shape
*/
class Circle:public Shape
{
    public:
        int i,j;
        Circle();
        ~Circle();
        /*
          Compiler indicates an error if the datatypes
          do not match. If override keyword is not
          used, then the compiler does not find the implementation 
          of the calculateArea function in the derived 
          class Sphere and calls the Circle
          class virtual function. 
        */
          virtual void calculateArea(double );
        //virtual void calculateArea(double ) override;
};
class Sphere:public Circle
{
    public:
        int x;
        Sphere();
        ~Sphere();
        virtual void calculateArea(int );
};
Shape::Shape()
{
}
Shape::~Shape()
{
}
Circle::Circle()
{
}
Circle::~Circle()
{
}
void Circle::calculateArea(double r)
{
    double area;
    area = (pi)*r*r;
    cout << "Area of the circle with radius " << r << " is " << area << std::endl;
}
Sphere::Sphere()
{
}
Sphere::~Sphere()
{
}
void Sphere::calculateArea(int r)
{
    double area;
    area = 4*(pi)*r*r;
    cout << "Area of the sphere with radius " << r << " is " << area << std::endl;
}
int main()
{
    Shape *p;
    Circle c;
    Sphere s;
    p=&s;
    p->calculateArea(5);

    return 0;
}
