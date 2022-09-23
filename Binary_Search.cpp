
#include <iostream>

using namespace std;

int main()
{
    int arr[6] = {1,2,5,8,10,13};
    int key=13;
    int low=0,mid=0,high=sizeof(arr)-1;
    while(low<=high)
    {
        mid = (low+high)/2;
        if(key == arr[mid])
        {
            cout << "Element at " << mid;
            return 0;
        }
        else if(key < arr[mid])
        {
            high = mid-1;
        }
        else
        {
            low = mid+1;
        }
    }
    
    return 0;
}