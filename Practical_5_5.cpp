#include <iostream>
using namespace std;

class Shape
{
public:
    virtual float Area() = 0;
    virtual void display_area() = 0;
    virtual ~Shape() {}
};

class Circle : public Shape
{
    float radius;

public:
    Circle(float radius)
    {
        this->radius = radius;
    }

    float Area() override
    {
        return 3.14 * radius * radius;
    }

    void display_area() override
    {
        cout << "Circle area is : " << Area() << endl;
    }
};

class Rectangle : public Shape
{
    float length, width;

public:
    Rectangle(float length, float width)
    {
        this->length = length;
        this->width = width;
    }

    float Area() override
    {
        return 0.5 * length * width;
    }

    void display_area() override
    {
        cout << "Triangle area is : " << Area() << endl;
    }
};

int main()
{
    Shape *shape1 = new Circle(5.0f);
    Shape *shape2 = new Rectangle(10.0f, 6.0f);

    shape1->display_area();
    shape2->display_area();

    return 0;
}
