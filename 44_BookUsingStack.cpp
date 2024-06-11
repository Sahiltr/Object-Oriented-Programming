#include<iostream>
using namespace std;
#define MAX 5

class Book
{
    int id;
    string name;
    float price;
    public:
        void set(int id, string name, float price)
        {
            this->id=id;
            this->name=name;
            this->price=price;
        }
        void show()
        {
            cout<<"ID : "<<id<<"\tName : "<<name<<"\tPrice : "<<price<<endl;
        }
};

class Stack
{
    Book data[MAX];
    int index;
    public:
        Stack()
        {
            index=-1;
        }
        bool IsEmpty()
        {
            if(index==-1)
            {
                cout<<"Stack is empty"<<endl;
                return true;
            }
            else
            {
                return false;
            }
        }
        bool isFull()
        {
            if(index==MAX-1)
            {
                cout<<"Stack is full"<<endl;
                return true;
            }
            else
            {
                return false;
            }
        }
        void push(Book n)
        {
            if(!isFull())
            {
                index++;
                data[index]=n;
            }
            else
            {
                isFull();
            }
        }
        void pop()
        {
            if(!IsEmpty())
            {
                index--;
            }
            else
            {
                IsEmpty();
            }
        }
        Book Peek()
        {
            if(!IsEmpty())
            {
                return data[index];
            }
        }
        void print()
        {
            for(int i=index;i>=0;i--)
            {
                data[i].show();
            }
            cout<<endl<<endl;
        }
};

int main()
{
    Book b1,b2,b3;
    b1.set(1,"A",651);
    b2.set(2,"B",412);
    b3.set(3,"C",321);
    Stack s;
    s.push(b1);
    s.push(b2);
    s.push(b3);
    s.print();
    s.pop();
    s.print();
    Book b=s.Peek();
    b.show();
    s.print();
}