
#include <iostream>
using namespace std;

int func(int n)
{

    if(n>0)
    {

        func(n-1);
        cout << n <<" | ";
    }
    return 0;
}

int main()
{
    int num=5;
    func(num);

    return 0;
}