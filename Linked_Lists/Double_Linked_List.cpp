
#include <iostream>
using namespace std;

struct Node
{
    int data;
    struct Node *prev;
    struct Node *next;
};

struct Node *head = NULL;
struct Node *tail = NULL;
int ele,val,pos;

void insert_at_begin(int data)
{
    struct Node *temp = new Node;
    temp->data = data;
    temp->prev = NULL;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        tail = temp;
    }
    else
    {
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
}

void insert_at_end(int data)
{
    struct Node *ptr = new Node;
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = NULL;
    if(head == NULL)
    {
        head = ptr;
        tail = ptr;
    }
    else
    {
        tail->next = ptr;
        ptr->prev = tail;
        tail = ptr;
    }
}

void insert_at_middle(int data,int ele)
{
    struct Node *ptr = new Node,*temp=head;
    ptr->data = data;
    ptr->prev = NULL;
    ptr->next = NULL;
    if(head == NULL)
    {
        head = ptr;
        tail = ptr;
    }
    else
    {
        for(int i=0;i<ele-1;i++)
        {
            temp = temp->next;
        }
        ptr->next = temp->next;
        temp->next->prev = ptr;
        temp->next = ptr;
        ptr->prev = temp;
    }
}

void delete_at_begin()
{
    if(head == NULL)
    {
        cout <<"No records found" << endl;
    }
    else
    {
        head->next->prev = NULL;
        head = head->next;
        head->prev = NULL;
    }
}

void delete_at_end()
{
    if(head == NULL)
    {
        cout << "No records found"<<endl;
    }
    else
    {
        tail->prev->next = NULL;
        tail->prev = tail;
        tail->next = NULL;
    }
}

void delete_at_middle(int ele)
{
    struct Node *ptr=head;
    if(ptr == NULL)
    {
        cout << "No records found"<<endl;
    }
    else
    {
        if(ele==0)
        {
            head = head->next;
            head->prev=NULL;
        }
        else
        {
            for(int i=0;i<ele-1;i++)
            {
                ptr = ptr->next;
            }
            ptr->next->prev = ptr;
            ptr->next = ptr->next->next;
        }
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
        while(ptr != NULL)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
    }
    cout << endl;
}

int main()
{
    insert_at_begin(80);
    traverse();

    insert_at_begin(56);
    traverse();
    
    insert_at_end(43);
    traverse();
    
    insert_at_middle(47,2);
    traverse();
    
    delete_at_begin();
    traverse();
    
    delete_at_end();
    traverse();
    
    insert_at_begin(76);
    traverse();
    
    delete_at_middle(0);
    traverse();
    
    return 0;
}