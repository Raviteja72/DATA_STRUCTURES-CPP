

#include <iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    
    char s1[10]="ravi",s2[10]="teja";
    cout << strcat(s1,s2) << endl;
    cout << strncat(s1,s2,2) << endl;
    char a[10]="Suresh", b[10]="R";
    cout << strcpy(b,a) << endl;
    cout << strncpy(a,b,1) << endl;
    
    cout << strstr(s1,"a")<<endl;
    cout << strchr(s1,'i');
    
    
    return 0;
}