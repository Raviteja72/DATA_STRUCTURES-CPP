
#include <iostream>
using namespace std;

int func(int n)
{
    if(n>100)
    {
        return n-10;
    }
    else
    {
        return func(func(n+11));
    }
    return 0;
}

int main()
{
    cout << func(95);
    return 0;
}
