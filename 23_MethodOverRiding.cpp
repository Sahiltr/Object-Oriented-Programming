#include<iostream>
using namespace std;

class A
{
    public:
        virtual void Hello() // runtime polymorphism
        {
            cout<<"class A"<<endl;
        }
};

class B: public A
{
    public:
        void Hello()
        {
            cout<<"class B"<<endl;
        }
};

int main()
{
    A *p; // p ka datatype class A hai
    B b;
    p = &b;
    p->Hello();
    A a;
    p = &a;
    p->Hello();
}