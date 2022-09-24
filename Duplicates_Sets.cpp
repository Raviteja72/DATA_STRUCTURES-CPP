#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,11,11,13,1,14,20,14};
    set<int> us;
    
    for(int i=0;i<v.size();i++)
    {
        us.insert(v[i]);
    }
    
    
    for(auto i:us)
    {
        if(count(v.begin(),v.end(),i)>1)
        {
            cout << " Duplicate : " << i << endl;
        }
    }
    
    /*
    for(auto i:v)
    {
      if(find(v1.begin(),v1.end(),i)==v1.end())
      {
        v1.push_back(i);
      }
      else
      {
          cout << i << endl;
      }
    }
    */
    return 0;
}











