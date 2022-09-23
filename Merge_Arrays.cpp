#include<iostream>
using namespace std;

struct Array{
    int A[5];
    int length;
};

int main()
{
    struct Array arr1 = {{1,3,5,7,9},5};
    struct Array arr2 = {{2,4,6,8,10},5};
    int arr[arr1.length+arr2.length];
    int i=0,j=0,k=0;
    while(i<arr1.length && j<arr2.length)
    {
        if(arr1.A[i] < arr2.A[j])
        {
            arr[k++] = arr1.A[i++];
        }
        else
        {
            arr[k++] = arr2.A[j++];
        }
    }
    for(;i<arr1.length;i++)
    {
        arr[k++] = arr1.A[i];
    }
    for(;j<arr2.length;j++)
    {
        arr[k++] = arr2.A[j];
    }
    //arr.length=arr1.length+arr2.length;
    
    for(int i=0;i<10;i++)
    {
        cout << arr[i] << " | ";
    }
    
    return 0;

}