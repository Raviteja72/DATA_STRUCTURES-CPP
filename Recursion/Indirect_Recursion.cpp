
#include <iostream>
using namespace std;
void funB(int n);
void funA(int n);

void funB(int num)
{
    if(num>0)
    {
        cout << num << " | ";
        funA(num/2);
    }
}

void funA(int num)
{
    if(num>0)
    {
        cout << num << " | ";
        funB(num-1);
    }
}   

int main()
{
    funA(20);
    return 0;
}
