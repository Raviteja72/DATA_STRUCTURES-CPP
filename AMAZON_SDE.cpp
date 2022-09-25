
#include <iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

long get(vector<int>parcels, int k)
{
    int rs=0;
    int n = parcels.size();
    int need = k-n;
    if(need <= 0)
    {
        return 0;
    }
    int pid=1;
    unordered_set<int> s;
    for(int i=0;i<n;i++)
    {
        s.insert(parcels[i]);
    }
    while(need!=0)
    {
        if(s.find(pid) == s.end())
        {
            rs += pid;
            need -= 1;
        }
        pid += 1;
    }
    return long(rs);
}

int main()
{
    vector<int> p ={6,5,4,1,3};
    int k=7;
    cout << get(p,k);

    return 0;
}