cp#include <iostream>
using namespace std;
class Book
{

    int id;
    string name;
    float price;

public:
    void set(int id, string name, float price)
    {

        this->id = id;
        this->name = name;
        this->price = price;
    }
    void show()
    {
        cout << "Id: " << id << "\tName: " << name << "\tPrice: " << price << endl;
    }
    int getID()
    {
        return id;
    }
};
class Node
{
public:
    Node *next;
    Book data;
    Node()
    {
        next = NULL;
    }
    Node(Book b)
    {
        data = b;
        next = NULL;
    }
};

class Linked_list
{
    Node *head;

    public:
    Linked_list()
    {
        head = NULL;
    }
    void Add(Book n)
    {
        Node *nn = new Node(n);
        if (head == NULL)
            head = nn;
        else
        {
            Node *t = head;
            while (t->next != NULL)
            {
                t = t->next;
            }
            t->next = nn;
        }
    }
    void Delete(int id)
        {
            Node *t1=head, *t2;
            while(t1 != NULL)
            {
                if(t1->data.getID() == id)
                {
                    t2->next=t1->next;
                    delete t1;
                    break;
                }
                t2=t1;
                t1=t1->next;
            }
        }
    void print()
        {
            Node *t = head;
            while(t != NULL)
            {
                t->data.show();
                t=t->next;
            }
            cout<<endl;
        }
};

int main()
{
    Book b1,b2,b3;
    b1.set(1,"R D SHARMA",900);
    b2.set(2,"R S AGRAWAL",750);
    b3.set(3,"B L THEREJA",1150);
    Linked_list l1;
    l1.Add(b1);
    l1.Add(b2);
    l1.Add(b3);
    l1.print();
    l1.Delete(2);
    cout<<"after deletion"<<endl;
    l1.print();
    
}