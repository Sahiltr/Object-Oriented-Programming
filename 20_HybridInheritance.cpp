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
        void setAdd(int x, int y)
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
        void setSub(int x, int y)
        {
            a=x;
            b=y;
        }
        void ShowSub()
        {
            cout<<"Subtraction: "<<a-b<<endl;
        }
};

class Student: public Add, public Sub
{
    public:
        Student(int x, int y)
        {
            setAdd(x,y);
            setSub(x,y);
        }
};

int main()
{
    Student a(300,200);
    a.ShowAdd();
    a.ShowSub();
}