#include<iostream>
using namespace std;

int main()
{
    int arr[8] = {-1,2,-3,4,-5,6,-8,9};
    int i=0,j=sizeof(arr)/sizeof(arr[0])-1;
    while(i<j)
    {
        while(arr[i]<=0){i++;}
        while(arr[j]>=0){j--;}
        if(i<j)
        {
            swap(arr[i],arr[j]);
        }
    }
    for(int i=0;i<8;i++)
    {
        cout << arr[i] << " | ";
    }
    return 0;

}