#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int data;
        Node *next;
        Node()
        {
            data=0;
            next=NULL;
        }
        Node(int n)
        {
            data=n;
            next=NULL;
        }
};

class Linked_list
{
    Node *head;
    public:
        Linked_list()
        {
            head=NULL;
        }
        void Add(int n)
        {
            Node *nn = new Node(n);
            if(head == NULL)
                head = nn;
            else
            {
                Node *t=head;
                while(t->next != NULL)
                {
                    t=t->next;
                }
                t->next = nn;
            }
        }
        void edit(int n, int new_n)
        {
            Node *t1=head;
            while(t1 != NULL)
            {
                if(t1->data == n)
                {
                    t1->data = new_n;
                    break;
                }
                t1=t1->next;
            }
        }
        void Delete(int n)
        {
            Node *t1=head, *t2;
            while(t1 != NULL)
            {
                if(t1->data == n)
                {
                    t2->next=t1->next;
                    delete t1;
                    break;
                }
                t2=t1;
                t1=t1->next;
            }
        }
        void search(int n)
        {
            Node *t1=head;
            int count=0;
            while(t1 != NULL)
            {
                if(t1->data == n)
                {
                    cout<<"Element "<<t1->data<<" found at position "<<count<<endl;
                    break;
                }
                count++;
                t1=t1->next;
            }
        }

        void print()
        {
            Node *t=head;
            while(t != NULL)
            {
                if(t->next != NULL)
                    cout<<t->data<<"|"<<t->next<<" -> ";
                else
                    cout<<t->data<<"|";
                t=t->next;
            }
            cout<<"NULL"<<endl;
        }

        int maxi()
        {
            Node *t=head;
            int maxi = INT_MIN;
            while(t != NULL)
            {
                maxi = max(t->data,maxi);
                t = t->next;
            }

            return maxi;
        }

        int mini()
        {
            Node *t=head;
            int mini = INT_MAX;
            while(t != NULL)
            {
                mini = min(t->data,mini);
                t = t->next;
            }

            return mini;
        }

        int len()
        {
            Node *t=head;
            int len = 0;
            while(t != NULL)
            {
                len++;
                t = t->next;
            }
            return len;
        }

        int avg()
        {
            Node *t=head;
            int sum = 0;
            int len = 0;
            while(t != NULL)
            {
                sum +=t->data;
                len++;
                t = t->next;
            }

            return sum/len;
        }

       
};

int main()
{
    Linked_list l1;
    l1.Add(1);
    l1.Add(9);
    l1.Add(18);
    l1.Add(7);
    l1.Add(6);
    // l1.print();
    // l1.Delete(8);
    // l1.print();
    // l1.edit(7,1000);
    // l1.print();
    // l1.search(9);

    // l1.print();
    cout<<"maxi: "<<l1.maxi()<<endl;
    cout<<"mini: "<<l1.mini()<<endl;
    cout<<"len: "<<l1.len()<<endl;
    cout<<"avg: "<<l1.avg()<<endl;
}