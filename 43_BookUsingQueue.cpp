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

class Queue
{
    Book data[MAX];
    int front, rear;
public:
    Queue()
    {
        front=0;
        rear=-1;
    }
    bool isEmpty()
    {
        if(rear==-1)
        {
            cout<<"Queue is empty"<<endl<<endl;
            return true;
        }
        return false;
    }
    bool isFull()
    {
        if(rear == MAX-1)
        {
            cout<<"Queue is full"<<endl<<endl;
            return true;
        }
        return false;
    }
    void enqueue(Book n)
    {
        if(!isFull())
        {
            rear++;
            data[rear]=n;
        }
    }
    void remove()
    {
        if(!isEmpty())
        {
            for(int i=front;i<rear;i++)
            {
                data[i]=data[i+1];
            }
            rear--;
        }
    }
    Book Peek()
    {
        if(!isEmpty())
        {
            return data[front];
        }
        else {
            Book b;
            b.set(-1, "Empty", 0); // Indicate empty book
            return b;
        }
    }
    void print_all()
    {
        if(isEmpty()) {
            cout << "Queue is empty" << endl << endl;
            return;
        }
        for(int i=front;i<=rear;i++)
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
    Queue s;
    s.enqueue(b1);
    s.enqueue(b2);
    s.enqueue(b3);
    s.print_all();
    Book b=s.Peek();
    b.show();
    s.print_all();
}
