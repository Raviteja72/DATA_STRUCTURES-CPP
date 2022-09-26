#include<iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
};
struct Node *head=NULL,*tail=NULL;
int ele,val,pos;

void insert_at_begin(int data)
{
    struct Node *ptr = new Node;
    ptr->data = data;
    ptr->next=NULL;
    if(head == NULL)
    {
        head = ptr;
        head->next = head;
        tail = head;
    }
    else
    {
        ptr->next = head;
        head = ptr;
        tail->next = head;
    }
}

void insert_at_middle(int data,int pos)
{
    struct Node *ptr=head, *temp=new Node;
    
}

void insert_at_end(int data)
{
    struct Node *ptr = new Node,*temp=head;
    ptr->data=data;
    ptr->next=NULL;
    if(head == NULL)
    {
        head = ptr;
        head->next = head;
        tail = head;
    }
    else
    {
        tail->next = ptr;
        tail = ptr;
        tail->next = head;
    }
    
}

void traverse()
{
    struct Node *ptr = head;
    if(ptr == NULL)
    {
        cout << "No records found" << endl;
    }
    else
    {
        do
        {
            cout << ptr->data <<" -> ";
            ptr = ptr->next;
        }while(ptr != head);
    }
    cout << endl;
}

int main()
{
    insert_at_begin(1000);
    traverse();
    
    insert_at_begin(100);
    traverse();
    
    insert_at_begin(10);
    traverse();
    
    insert_at_end(200);
    traverse();
    
    return 0;
}