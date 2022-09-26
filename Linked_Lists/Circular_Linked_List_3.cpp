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
    temp->data = data;
    temp->next = NULL;
    if(ptr == NULL)
    {
        head = temp;
        head->next = head;
        tail = head;
    }
    else
    {
        for(int i=0;i<pos-1;i++)
        {
            ptr = ptr->next;
        }
        temp->next = ptr->next;
        ptr->next = temp;
    }
    
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

void delete_at_begin()
{
    struct Node *ptr = head;
    if(ptr == NULL)
    {
        cout <<"No records found " << endl;
    }
    else
    {
        head = head->next;
        ptr->next = NULL;
        tail->next = head;
    }
}

void delete_at_end()
{
    struct Node *ptr=head;
    if(ptr == NULL)
    {
        cout <<"No records found" << endl;
    }
    else
    {
        while(ptr->next != tail)
        {
            ptr = ptr->next;
        }
        tail->next = NULL;
        tail = ptr;
        tail->next = head;
    }
}

void delete_at_middle(int pos)
{
    struct Node *ptr=head;
    if(ptr == NULL)
    {
        cout <<"No records found" << endl;
    }
    else
    {
        if(pos==0)
        {
            head = head->next;
            ptr->next=NULL;
            tail->next=head;
        }
        else
        {
            for(int i=0;i<pos-1;i++)
            {
                ptr = ptr->next;
            }
            ptr->next = ptr->next->next;
        }
    }
}

void search(int ele)
{
    struct Node *ptr = head;
    int i=0;
    if(head == NULL)
    {
        cout << "No records found" << endl;
    }
    else
    {
        do
        {
            i++;
            if(ptr->data == ele)
            {
                break;
            }
            ptr = ptr->next;
        }while(ptr != head);
        if(i==0)
        {
            cout << "Element not found" << endl;
        }
        else
        {
            cout <<"Element found at : " << i << endl;
        }
    }
}

void length()
{
    int len=0;
    struct Node *ptr = head;
    if(ptr == NULL)
    {
        cout << "No records found" << endl;
    }
    else
    {
        do
        {
            len++;
            ptr = ptr->next;
        }while(ptr != head);
        cout << "Length is : " << len << endl;
    }
}

void reverse()
{
    struct Node *ptr=head,*p=NULL,*q=NULL,*temp=head;
    if(ptr == NULL)
    {
        cout << "No records found" << endl;
    }
    else
    {
        do
        {
            p = q;
            q = ptr;
            ptr = ptr->next;
            q->next = p;
        }while(ptr != head);
        head=q;
        ptr->next=head;
        
    }
    
}

void max()
{
    int maxy=-1000;
    struct Node *ptr = head;
    if(ptr == NULL)
    {
        cout << "No records found" << endl;
    }
    else
    {
        do
        {
            if(maxy < ptr->data)
            {
                maxy = ptr->data;
            }
            ptr = ptr->next;
        }while(ptr != head);
        cout << "Maximum element is : " << maxy << endl;
    }
}

void min()
{
    int mini=1000000;
    struct Node *ptr = head;
    if(ptr == NULL)
    {
        cout << "No records found" << endl;
    }
    else
    {
        do
        {
            if(ptr->data < mini)
            {
                mini = ptr->data;
            }
            ptr = ptr->next;
        }while(ptr != head);
        cout << "Minimum element is : " << mini << endl;
    }
}

void sum()
{
    struct Node *ptr = head;
    int sum=0;
    if(ptr == NULL)
    {
        cout << "Records not sound" << endl;
    }
    else
    {
        do
        {
            sum += ptr->data;
            ptr = ptr->next;
        }while(ptr != head);
    }
    cout << "Sum is : " << sum << endl; 
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
    cout << "CIRCULAR LINKED LIST" << endl;
    int s=0;
    while(1)
    {
        cout << "1.insert_at_begin\n2.insert_at_middle\n3.insert_at_end\n4.delete_at_begin\n5.delete_at_middle\n6.delete_at_end\n7.search\n8.traverse\n9.length\n10.max\n11.min\n12.sum\n13.reverse\n14.Exit" << endl;
        cout << "Choose one option : " ;
        cin >> s;
        switch(s)
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
                    search(ele);
                    break;
            case 8 : traverse(); break;
            case 9 : length(); break;
            case 10 : max(); break;
            case 11 : min(); break;
            case 12 : sum(); break;
            case 13 : reverse(); break;
            case 14 : exit(0);
            default : cout << "Enter correct value : ";
                    break;
        }
    }
    
    return 0;
}