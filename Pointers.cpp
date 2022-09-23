
#include <iostream>

using namespace std;

int main()
{
    int *p,x=2003;
    p = &x;
    cout << &p << " | " << p << " | " << *p;
    
    return 0;
}