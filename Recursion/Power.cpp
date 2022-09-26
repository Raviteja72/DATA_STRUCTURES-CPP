#include<cmath>
#include <iostream>
using namespace std;

int power(int base,int exe)
{
    if(exe<=0)
    {
        return 1;
    }  
    return power(base,exe-1)*base;
}

int main()
{
    cout << power(12,3);   
}
