#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {10,11,11,13,1,14,20,14};
    vector<int> v1;
    for(int i:v)
    {
      if(find(v1.begin(),v1.end(),i)==v1.end())
      {
        v1.push_back(i);
      }
      else
      {
          cout<<"Duplicate : "<<i<<endl;
      }
    }
    return 0;
}




