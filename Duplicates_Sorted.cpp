
#include <iostream>

using namespace std;

int main()
{
    //Finding duplicate in sorted array
    
    //Approach-1
    int arr[10] = {1,2,3,4,4,5,6,7,7,8};

    int last_duplicate=0;
    cout << "Duplicate elements are : " ;
    for(int i=0;i<sizeof(arr)/sizeof(arr[0] - 1);i++)
    {
        if(arr[i] == arr[i+1] && arr[i] != last_duplicate)
        {
            last_duplicate = arr[i];
            cout << arr[i] << " | ";
        }
    }
    cout << endl;
    
    //Approach-2
    
    int hash[arr[9]+1] = { 0 };
    for(int i=0;i<sizeof(hash)/sizeof(hash[0]);i++)
    {
        hash[arr[i]]++;
    }
    cout << endl << "Hash : ";
    for(int i:hash)
    {
        cout << i << "| ";
    }
    int ind=0;
    cout << "\nDuplicate elements : ";
    
    for(int i=0;i<sizeof(hash)/sizeof(hash[0]);i++)
    {
        if(hash[i]>1)
        {
            cout << i << " | ";
        }
    }

    return 0;
}