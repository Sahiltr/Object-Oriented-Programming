#include<iostream>
using namespace std;

class A
{
    public:
        A(int x)
        {
            cout<<"Class A: "<<x<<endl;
        }
};

class B: public A
{
    public:
        B(int y):A(y++) //post increment. Here constructor B will call parent constructor A and A will perform and after its completion B will be executed
        {
            cout<<"CLass b: "<<y<<endl;
        }
};

int main()
{
  B b(10);
}