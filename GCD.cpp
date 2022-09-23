
#include <iostream>

using namespace std;

int main()
{
    int m,n;
    m=36,n=60;
    while(m!=n)
    {
        if(m>n)
        {
            m=m-n;
        }
        else
        {
            n=n-m;
        }
        cout << m << " | " << n << endl;
    }
    cout << n;
    
    
    return 0;
}