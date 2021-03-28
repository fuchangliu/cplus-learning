#include <iostream>

using namespace std;

class Shape
{
public:
    Shape()
    {
        cout << "Shape()" << endl;
    }
    ~Shape()
    {
        cout << "~Shape()" << endl;
    }
    virtual double calcArea()
    {
        cout << "Shape::calcArea()" << endl;
        return 0;
    }
};

class Rect : public Shape
{
public:
    Rect(double width, double height)
    {
        m_dWidth = width;
        m_dHeight = height;
        cout << "Rect()" << endl;
    }
    ~Rect()
    {
        cout << "~Rect()" << endl;
    }
    virtual double calcArea()
    {
        cout << "Rect::calcArea()" << endl;
        return m_dWidth * m_dHeight;
    }
private:
    double m_dWidth;
    double m_dHeight;
};

class Circle : public Shape
{
public:
    Circle(double r)
    {
        m_dR = r;
        cout << "Circle()" << endl;
    }
    ~Circle()
    {
        cout << "~Circle()" << endl;
    }
    virtual double calcArea()
    {
        cout << "Circle::calcArea()" <<endl;
        return 3.14 * m_dR * m_dR;
    }
protected:
    double m_dR;
};

int main()
{
    Shape *shape1 = new Rect(3, 6);
    Shape *shape2 = new Circle(5);

    shape1->calcArea();
    shape2->calcArea();

    delete shape1;
    delete shape2;

    shape1 = NULL;
    shape2 = NULL;

    return 0;
}
