
#include <iostream>

using namespace std;

int main()
{
    int x=10;
    int &y = x;
    cout << y;
    x++;
    y++;
    cout << y;
    
}