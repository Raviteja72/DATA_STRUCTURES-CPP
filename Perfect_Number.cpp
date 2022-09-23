
#include <iostream>

using namespace std;

int main()
{
    int num;
    cout << "Enter number : " ;
    cin >> num;
    int sum=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            sum = sum+i;
        }
    }
    if(2*num == sum)
    {
        cout << "Perfect number ";
    }
    else
    {
        cout << "Not a Perfect Number ";
    }
    
    
    return 0;
}