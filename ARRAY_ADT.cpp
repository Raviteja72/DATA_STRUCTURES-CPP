#include<iostream>
using namespace std;

struct Array{
    int A[20],size,length;
};

int search(struct Array arr,int ele)
{
    int l=0,m=0,h=arr.length-1;
    while(l<=h)
    {
        m = (l+h)/2;
        if(ele == arr.A[m])
        {
            cout << "Element found at : " << m << endl;
            return 0;
        }
        else if(ele < arr.A[m])
        {
            h = m-1;
        }
        else
        {
            l = m+1;
        }
    }
    cout << "Element not found " << endl;
    return 0;
};

int del(struct Array *arr,int index)
{
    int ele = arr->A[index];
    int i;
    if(index >= 0 && index < arr->length)
    {
        for(i=index;i<arr->length-1;i++)
        {
            arr->A[i] = arr->A[i+1];
        }
    }
    arr->length--;
    cout << "The deleted element is : " << ele << endl;
    return 0;
}

void Append(struct Array *arr,int x)
{
    if(arr->length < arr->size)
        arr->A[arr->length++] = x;
}

void insert(struct Array *arr,int index,int value)
{
    if(index>=0 && index <= arr->length)
    {
        for(int i=arr->length;i>index;i--)
        {
            arr->A[i] = arr->A[i-1];
        }
    }
    arr->A[index] = value;
    arr->length++;
};

int get(struct Array arr,int index)
{
    if(index >=0 && index <= arr.length)
    {
        cout << "The element at index " << index << " is " << arr.A[index] << endl;
    }
    return 0;
};

void set(struct Array *arr,int index,int ele)
{
    if(index>=0 && index<arr->length)
    {
        arr->A[index] = ele;
    }
}

void display(struct Array arr)
{
    int i;
    for(i=0;i<arr.length-1;i++)
    {
        cout << arr.A[i] << " -> ";
    }
    cout << arr.A[i];
    cout << endl;
    
}

int max(struct Array arr)
{
    int maxy=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(maxy < arr.A[i])
        {
            maxy = arr.A[i];
        }
    }
    cout << "Maximum element is : " << maxy << endl;
    return 0;
}

int min(struct Array arr)
{
    int mini=arr.A[0];
    for(int i=1;i<arr.length;i++)
    {
        if(arr.A[i] < mini)
        {
            mini = arr.A[i];
        }
    }
    cout << "Minimum element is : " << mini << endl;
    return 0;
}

void reverse(struct Array *arr)
{
    for(int i=0,j=arr->length-1;i<j;i++,j--)
    {
        swap(arr->A[i],arr->A[j]);
    }
    
}

void left_shift_rotate(struct Array *arr,int val)
{
    int rotate[arr->length];
    for(int i=0;i<val;i++)
    {
        rotate[i] = arr->A[i];
    }
    
    int x = val;
    for(int i=0;x<arr->length;i++)
    {
        arr->A[i] = arr->A[x++];
    }
    x=0;
    for(int i=arr->length-val;i<arr->length;i++)
    {
        arr->A[i] = rotate[x++];
    }
}

void right_shift_rotate(struct Array *arr, int val)
{
    int rotate[arr->length],rotate1[arr->length];
    int ind=0;
    for(int i=arr->length-val;i<arr->length;i++)
    {
        rotate[ind++] = arr->A[i];
    }
    ind=0;
    for(int i=0;i<arr->length-val;i++)
    {
        rotate1[ind++] = arr->A[i];
    }
    for(int i=0;i<val;i++)
    {
        arr->A[i] = rotate[i];
    }
    ind=0;
    for(int i=val;i<arr->length;i++)
    {
        arr->A[i] = rotate1[ind++];
    }
}

int sum(struct Array arr)
{
    int sum=0;
    for(int i=0;i<arr.length;i++)
    {
        sum += arr.A[i];
    }
    cout << "The sum of all elements : " << sum << endl;
    return 0;
}
int avg(struct Array arr,int sum)
{
    cout << "The average of all elements : " << sum/(arr.length) << endl;
    return 0;
}

int check_sort(struct Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i] > arr.A[i+1])
        {
            cout << "Array is not sorted" << endl; 
            return 0;
        }
    }
    cout << "Array is sorted" << endl;
    return 1;
}

int main()
{
    struct Array arr = {{1,2,3,4,5,6},20,6};
    int ele=0,val=0,index=0;
    int ch;
    cout << " ADT operations on Arrays " << endl;
    while(1)
    {
        cout << endl;
        cout << "1. Display\n2. Append\n3. Insert\n4. Delete\n5. Search\n6. Get\n7. Set\n8. Max\n9. Min\n10. Avg\n11. Sum\n12. Reverse\n13. Left_Shift_Rotate\n14. Right_Shift_Rotate\n15. Check_Sort\n16. Exit" << endl;
        cout << "Choose your option : " ;
        cin >> ch;        
        switch(ch)
        {
            case 1 : display(arr); break;
            case 2 : cout << "Enter number to Append : ";
                    cin >> ele;
                    Append(&arr,ele);
                    break;
            case 3 : cout << " Enter number to Insert : ";
                    cin >> ele;
                    cout << "Enter index value : ";
                    cin >> index;
                    insert(&arr,index,ele);
                    break;
            case 4 : cout << "Enetr index to delete : ";
                    cin >> ele;
                    del(&arr,ele);
                    break;
            case 5 : cout << " Enter element to search : ";
                    cin >> ele;
                    search(arr,ele);
                    break;
            case 6 : cout << "Enter index to retrieve number : ";
                    cin >> ele;
                    get(arr,ele);
                    break;
            case 7 : cout << "Enter element to set : ";
                    cin >> ele;
                    cout << "Enter index : ";
                    cin >> index;
                    set(&arr,index,ele);
                    break;
            case 8 : max(arr); break;
            case 9 : min(arr); break;
            case 10 : avg(arr,sum(arr)); break;
            case 11 : sum(arr); break;
            case 12 : reverse(&arr);
                    display(arr);    
                    break;
            case 13 : cout << "Enter number of values to left rotate : ";
                    cin >> ele;
                    left_shift_rotate(&arr,ele);
                    display(arr);
                    break;
            case 14 : cout << "Enter number of values to right rotate : ";
                    cin >> ele;
                    right_shift_rotate(&arr,ele);
                    display(arr);
                    break;
            case 15 : check_sort(arr); break;
            case 16 : exit(0);
                    break;
            
        }
    }
}

