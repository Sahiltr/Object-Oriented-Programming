#include<iostream>
using namespace std;

class A //Base class
{
    public:
        void HelloA()
        {
            cout<<"Hello A"<<endl;

        }
};

class B: public A //Derived class
{
    public:
        void HelloB()
        {
            cout<<"Hello B"<<endl;
        }
};

int main()
{
    B obj;
    obj.HelloA();
    obj.HelloB();
}