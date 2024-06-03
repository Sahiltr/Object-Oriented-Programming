#include<iostream>
using namespace std;

class myMath
{
    protected:
        int a,b;
};

class Add: public myMath
{
    public:
        Add(int x, int y)
        {
            a=x;
            b=y;
        }
        void ShowAdd()
        {
            cout<<"Addition: "<<a+b<<endl;
        }
};

class Sub: public myMath
{
    public:
        Sub(int x, int y)
        {
            a=x;
            b=y;
        }
        void ShowSub()
        {
            cout<<"Subtraction: "<<a-b<<endl;
        }
};

int main()
{
    Add a(10,30);
    Sub s(50,24);
    a.ShowAdd();
    s.ShowSub();
}