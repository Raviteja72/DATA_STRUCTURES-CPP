#include<iostream>
using namespace std;

struct Array{
    int *A,size,length;
};

void create(struct Array arr)
{
    cout << "Enter array elements : ";
    for(int i=0;i<arr.length;i++)
    {
        cin >> arr.A[i];
    }
}

void display(struct Array arr)
{
    cout << "Displaying array : " << endl ;
    for(int i=0;i<arr.length;i++)
    {
        cout << arr.A[i] << " | ";
    }
}

int main(){
    struct Array arr;
    int size=0;
    cout << "Enter size of array : ";
    cin >> size;
    arr.A = new int[size];
    arr.size=size;
    cout << "Enter length of the array : ";
    cin >> arr.length;
    create(arr);
    display(arr);
    
    
    return 0;
}