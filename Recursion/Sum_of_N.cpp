
#include <iostream>
using namespace std;

int sum(int n)
{
    int s=n;
    if(n>0)
    {
        s += sum(n-1);
        cout << n << " | ";
    }
    return s;
}

int main()
{
    cout << "\n" <<sum(10);
    return 0;
}
