
#include <iostream>

using namespace std;
int x=0;
int func(int n)
{

    if(n>0)
    {
        x++;
        return func(n-1)+x;
    }
    return 0;
}

int main()
{
    int num=5;
    cout << func(num);

    return 0;
}