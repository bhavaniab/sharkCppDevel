#include<iostream>
#define pi 3.14
using namespace std;
class Shape
{
    protected:
    int radius;
    public:
    //virtual double surfaceArea()=0;
    virtual double volume()=0;
};
class Sphere:public Shape
{
    public:
    Sphere();
    ~Sphere();
    Sphere(int );
    public:
    //double surfaceArea();
    double volume();
};
class Cylinder:public Shape
{
    public:
    int height;
    Cylinder();
    Cylinder(int ,int );
    ~Cylinder();
    //double surfaceArea();
    public:
    double volume();
};
Sphere::Sphere()
{
   cout << "DEfault constructor " << std::endl;
}
Sphere::Sphere(int r)
{
   radius=r;
}
Sphere::~Sphere()
{
    cout << "Destructor of sphere " << std::endl;
}
Cylinder::Cylinder()
{
}
Cylinder::Cylinder(int r, int h)
{
   radius=r;
   height=h;
}
Cylinder::~Cylinder()
{
    cout << "Cylinder destructor " << std::endl;
}
double Cylinder::volume()
{
   double vol;
   vol=pi*radius*radius*height;
   return (vol);
}
double Sphere::volume()
{
    double vol;
    vol=pi*radius*radius*radius;
    return vol;
}
int main()
{
    Cylinder cy1(2,3);
    Cylinder cy2(3,5);
    Sphere sp1(2);
    Sphere sp2(5);
    cout << "volume of cylinder 1 " << cy1.volume() << std::endl;
    cout << "volume of cylinder 2 " << cy2.volume() << std::endl;
    cout << "volume of sphere 1 " << sp1.volume() << std::endl;    
    return 0;
}
