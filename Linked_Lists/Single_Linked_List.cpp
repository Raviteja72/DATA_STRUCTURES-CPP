
#include <iostream>
using namespace std;

struct Node{
    int data;
    struct Node *next;
};
struct Node *head=NULL;
struct Node *tail=NULL;
int ele,val,pos;
void insert_at_begin(int data){
    struct Node *temp = new Node;
    temp->data = data;
    temp->next = NULL;
    if(head == NULL)
    {
        head = temp;
        tail=temp;
    }
    else
    {
        temp->next = head;
        head = temp;
    }
}

void insert_at_middle(int data,int pos)
{
    struct Node *ptr2 = new Node;
    struct Node *temp1 = head;
    ptr2->data = data;
    ptr2->next = NULL;
    for(int i=0;i<pos-1;i++)
    {
        temp1 = temp1->next;
    }
    ptr2->next = temp1->next;
    temp1->next = ptr2;
}

int search(int ele)
{
    int i=0;
    struct Node *temp=head;
    if(head == NULL)
    {
        cout << "No records found"<<endl;
    }
    else
    {
        while(temp != NULL)
        {
            if(temp->data == ele)
            {
                return i;
            }
            i++;
            temp = temp->next;
        }
    }
    return -1;
}

void insert_at_end(int data)
{
    struct Node *ptr1 = new Node;
    ptr1->data = data;
    ptr1->next = NULL;
    if(head == NULL)
    {
        head=ptr1;
    }
    else
    {
        tail->next = ptr1;
        tail = ptr1;
    }
}

void delete_at_begin()
{
    struct Node *temp = head;
    if(head == NULL)
    {
        cout << "No records found" << endl;
    }
    else{
        head = head->next;
        temp->next = NULL;
    }
}

void delete_at_end()
{
    struct Node *temp=head;
    if(head == NULL)
    {
        cout << "No records found" << endl;
    }
    else
    {
        while(temp->next != tail)
        {
            temp = temp->next;
        }
        temp->next = NULL;
        tail = temp;
    }
}

void delete_at_middle(int pos)
{
    struct Node *temp=head,*ptr;
    if(head == NULL)
    {
        cout << "No record found " << endl;
    }
    else if(head->next == NULL)
    {
        head = NULL;
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            temp->next = temp;
        }
        temp->next = temp->next->next;
    }
}

void traverse()
{
    struct Node *ptr = head;
    if(head == NULL)
    {
        cout << "No records found"<<endl;
    }
    else
    {
        while(ptr != NULL)
        {
            cout << ptr->data << " -> ";
            ptr = ptr->next;
        }
        cout << endl;
    }
}

int main()
{
    cout << "SINGLE LINKED LIST " << endl;
    cout << endl;
    while(1)
    {
        cout << "1.insert_at_begin\n2.insert_at_middle\n3.insert_at_end\n4.delete_at_begin\n5.delete_at_middle\n6.delete_at_end\n7.search\n8.traverse\n9.Exit" << endl;
        cout << "Choose one option : ";
        int ch;
        cin >> ch;
        switch(ch)
        {
            case 1 : cout << "Enter value to insert : ";
                    cin >> ele;
                    insert_at_begin(ele);
                    break;
            case 2: cout << "Enter value to insert : ";
                    cin >> ele;
                    cout << "Enter position to insert : ";
                    cin >> pos;
                    insert_at_middle(ele,pos);
                    break;
            case 3 : cout << "Enter value to insert : ";
                    cin >> ele;
                    insert_at_end(ele);
                    break;
            case 4 : delete_at_begin(); break;
            case 5 : cout << "Enter position to delete : ";
                    cin >> ele;
                    delete_at_middle(ele);
                    break;
            case 6 : delete_at_end(); break;
            case 7 : cout << "Enter element to search : ";
                    cin >> ele;
                    val = search(ele);
                    if(val == -1){cout << "Element not found"<<endl;}
                    else{cout << "Element found at position" << val+1 << endl;}
                    break;
            case 8 : traverse(); break;
            case 9 : exit(0);
            default : cout << "Enter correct value : ";
                    break;
        }
        cout << endl;
    }
    return 0;
}