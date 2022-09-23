
#include <iostream>

using namespace std;

class rectangle
{
    public:
        int length=0,breadth=0;
        rectangle(int l,int b)
        {
            length = l;
            breadth = b;
        }
        
        int area()
        {
            return length*breadth;
        }
};

int main()
{
    rectangle r(10,20);
    cout << "Area : " << r.area();
    return 0;
}