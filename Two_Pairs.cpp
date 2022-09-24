#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> arr = {0, -1, 2, -3, 1};
    int target = -2,temp=0;
    unordered_set<int> us;
    for(int i=0;i<arr.size();i++)
    {
        temp = target-arr[i];
        if(us.find(temp) != us.end())
        {
            cout << "Pairs found : " << arr[i] << " -> " << temp << endl;
        }
        us.insert(arr[i]);
    }
    return 0;
}











