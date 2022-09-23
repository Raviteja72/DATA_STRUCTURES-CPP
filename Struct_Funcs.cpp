
#include <iostream>

using namespace std;

struct rectangle 
{
    int length;
    int breadth;
};

void initialize(struct rectangle *r,int l,int b)
{
    r->length = l;
    r->breadth = b;
}

void change_length(struct rectangle *r,int len)
{
    r->length = len;
}

int main()
{
    struct rectangle r;
     
    initialize(&r,10,20);
    cout << r.length << " | " << r.breadth << endl;
    change_length(&r,20);
    cout << r.length << " | " << r.breadth;
    
    return 0;
}