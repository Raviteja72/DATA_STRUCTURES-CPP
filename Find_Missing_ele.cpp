
#include <iostream>

using namespace std;

int main()
{
    int arr[5]={1,2,4,5,6};
    int sum=0,maxy=0;
    for(int i=0;i<5;i++)
    {
        if(arr[i] > maxy)
        {
            maxy = arr[i];
        }
        sum = sum + arr[i];
    }
    int ans = (maxy*(maxy+1))/2;
    cout << "Missing element is : " << ans-sum << endl;
    
    // Multiple missing elements - Approach-1
    
    int arr1[10]={11,12,14,16,17,20,21,23,24,25};
    int max=0;
    for(int i=0;i<sizeof(arr1)/sizeof(arr1[0]);i++)
    {
        if(arr1[i] > max) {max = arr1[i];}
    }
    int ind=0;
    cout << "Missing elements : " ;
    for(int i=arr1[0];i<=max;i++)
    {
        if(arr1[ind] != i)
        {
            cout << i << " | ";
        }
        else
        {
            ind++;
        }
    }

    return 0;
}