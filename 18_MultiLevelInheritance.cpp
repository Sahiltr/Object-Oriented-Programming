#include <iostream>
using namespace std;

class Shape
{
    protected:
        float area;
};

class Circle: public Shape
{
    public:
        void setCircle(float r)
        {
            area = 3.14*r*r;
        }
};

class Cylinder: public Circle
{
    float volume;
    public:
        void setCylinder(float h)
        {
            volume = area*h;
        }
        void show()
        {
            cout<<"Volume of cylinder: "<<volume<<endl;
        }
};

int main()
{
    Cylinder c;
    c.setCircle(5);
    c.setCylinder(12);
    c.show();
}
