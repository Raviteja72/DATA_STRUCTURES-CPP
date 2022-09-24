
#include<iostream>
#include<array>
using namespace std;

int main()
{
    // STL arrays 
    
    int arr[5] = {1,2,3,4,5};
    array<int, 5> a = {1,2,3,4,5};
    int size = a.size();
    for(int i=0;i<size;i++)
    {
        cout << a[i] << " | ";
    }
    cout << " \nThe element at 2 is : " << a.at(2) <<endl;
    
    // to check array is empty : a.empty() -> return 0 if false 1 if true 
    
    cout << "First element : " << a.front() << "\nLast element : " << a.back() << endl;
}