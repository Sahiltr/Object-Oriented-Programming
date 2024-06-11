#include<iostream>
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
    int MAX=5;
    Node *head;
    public:
        Linked_list()
        {
            head=NULL;
        }
        bool IsEmpty()
        {
            if(head==NULL)
            {
                cout<<"LL is empty"<<endl;
                return true;
            }
            else
            {
                cout<<"LL is not empty"<<endl;
                return false;
            }
        }
        bool isFull()
        {
            Node *t1=head;
            int c=0;
            while(t1!=NULL){
                c++;
                t1=t1->next;
            }
            if(c==MAX)
            {
                cout<<"LL is full"<<endl;
                return true;
            }
            else
            {
                cout<<"LL is not full"<<endl;
                return false;
            }
        }
        void push_value(int n)
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
        void remove(int n)
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
        int Top_element()
        {
            if(!IsEmpty())
            {
                cout<<head->data<<endl;
                return 0;
            }
            return -1;
        }
        void print_all()
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
            cout<<"NULL"<<endl<<endl;
        }
        void search(int n)
        {
            Node *t1=head;
            int count=0;
            while(t1 != NULL)
            {
                if(t1->data == n)
                {
                    cout<<"Element "<<t1->data<<" found at position "<<count<<endl<<endl;
                    break;
                }
                count++;
                t1=t1->next;
            }
        }
        void size()
        {
            Node *t1=head;
            int count=0;
            while(t1 != NULL)
            {
                count++;
                t1=t1->next;
            }
            cout<<"Size of the Linked List is "<<count<<endl<<endl;
        }
        void capacity()
        {
            Node *t1=head;
            int count=0;
            while(t1 != NULL)
            {
                count++;
                t1=t1->next;
            }
            if(count==MAX)
            {
                MAX=MAX*2;
            }
            cout<<"Capacity is "<<MAX<<endl<<endl;
            return;
        }
        void Sum()
        {
            Node *t1=head;
            int s=0;
            while(t1 != NULL)
            {
                s += t1->data;
                t1=t1->next;
            }
            cout<<"Sum of the Linked List is "<<s<<endl<<endl;
        }
        void Avg()
        {
            Node *t1=head;
            float a,s=0;
            int c=0;
            while(t1 != NULL)
            {
                s += t1->data;
                t1=t1->next;
                c++;
            }
            cout<<"Avg of the Linked List is "<<s/c<<endl<<endl;
        }
        void Max()
        {
            Node *t1=head;
            int mx=INT16_MIN;
            while(t1 != NULL)
            {
                mx=max(mx,t1->data);
                t1=t1->next;
            }
            cout<<"Max element is "<<mx<<endl<<endl;
        }
        void Min()
        {
            Node *t1=head;
            int mn=INT16_MAX;
            while(t1 != NULL)
            {
                mn=min(mn,t1->data);
                t1=t1->next;
            }
            cout<<"Min element is "<<mn<<endl<<endl;
        }
        void Clear()
        {
            Node *t1=head, *temp;
            while(t1!=NULL)
            {
                temp=t1;
                t1=t1->next;
                free(temp);
            }
            head=NULL;
        }
};

int main()
{
    Linked_list s;
    int ch;
    do
    {
        cout<<"-------- ENTER YOUR CHOICE --------"<<endl;
        cout<<" 0. Exit \n 1. New Value \n 2. Remove \n 3. Top \n 4. Print All \n 5. Search \n 6. Size \n 7. Capacity \n 8. Sum \n 9.Average \n 10. Maximum \n 11. Minimum \n 12. Clear \n 13. Check if Empty \n 14. Check if Full"<<endl;
        cout<<"enter choice: ";
        cin>>ch;
        switch(ch)
        {
            case 0:
                break;
            case 1:
                int v;
                cout<<"Enter value to push: ";
                cin>>v;
                s.push_value(v);
                break;
            case 2:
                int r;
                cout<<"Enter value to remove: ";
                cin>>r;
                s.remove(r);
                break;
            case 3:
                s.Top_element();
                break;
            case 4:
                s.print_all();
                break;
            case 5:
                int n;
                cout<<"Enter element you want to search: ";
                cin>>n;
                s.search(n);
                break;
            case 6:
                s.size();
                break;
            case 7:
                s.capacity();
                break;
            case 8:
                s.Sum();
                break;
            case 9:
                s.Avg();
                break;
            case 10:
                s.Max();
                break;
            case 11:
                s.Min();
                break;
            case 12:
                s.Clear();
                break;
            case 13:
                s.IsEmpty();
                break;
            case 14:
                s.isFull();
                break;
            default:
                cout<<"\nInvalid choice"<<endl;
        }
    }
    while(ch!=0);
}