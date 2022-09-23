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
    if(index >= 0 && index <= arr->length)
    {
        for(int i=index;i<arr->length;i++)
        {
            arr->A[i] = arr->A[i+1];
        }
    }
    arr->length--;
    return ele;
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
        return arr.A[index];
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
    return maxy;
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
    return mini;
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
    return sum;
}
int avg(struct Array arr,int sum)
{
    return sum/(arr.length);
}

int check_sort(struct Array arr)
{
    for(int i=0;i<arr.length-1;i++)
    {
        if(arr.A[i] > arr.A[i+1])
            return 0;
    }
    return 1;
}

int main(){
    struct Array arr = {{1,2,3,4,5},20,5};
    cout << "Original array : ";
    display(arr);
    
    Append(&arr,6);
    cout << "After appending : ";
    display(arr);
    
    
    insert(&arr,2,222);
    cout << "After inserting : ";
    display(arr);

    cout << "Deleted element : " << del(&arr,3) << endl;
    cout << "After deleting : ";
    display(arr);
    
    search(arr,222);
    
    cout << "The value at index 2 is : " << get(arr,2) << endl;
    
    set(&arr,0,111);
    cout << "After setting the element : ";
    display(arr);
    
    cout << "The Maximum element is : " << max(arr) << endl;
    cout << "The Minimum element is : " << min(arr) << endl;
    cout << "The Sum of all elements is : " << sum(arr) << endl;
    cout << "The Average of all elements is : " << avg(arr,sum(arr)) << endl;
    display(arr);
    
    right_shift_rotate(&arr,1);
    display(arr);
    
    left_shift_rotate(&arr,1);
    display(arr);
    
    reverse(&arr);
    display(arr);
    
    int val = check_sort(arr);
    if(val==0)
    {
        cout << "Array is not sorted" << endl;
    }
    else
    {
        cout << "Array is sorted" << endl;
    }
    return 0;
}