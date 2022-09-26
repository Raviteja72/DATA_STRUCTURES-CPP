
#include <iostream>
using namespace std;

int func(int n)
{

    if(n>0)
    {
        cout << n <<" | ";
        func(n-1);
    }
    return 0;
}

int main()
{
    int num=5;
    func(num);

    return 0;
}