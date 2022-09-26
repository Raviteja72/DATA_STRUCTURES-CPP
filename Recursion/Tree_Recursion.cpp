
#include <iostream>
using namespace std;

int func(int num){
    if(num>0)
    {
        cout << num << " -> ";
        func(num-1);
        func(num-1);
    }
    return 0;
}

int main()
{
    func(3);
    return 0;
}
