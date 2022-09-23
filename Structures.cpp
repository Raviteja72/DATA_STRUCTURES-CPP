

#include <iostream>
#include<cstring>
#include<string>

using namespace std;

int main()
{
    
    struct stu{
        int id;
        string name;
        string company;
    }student1;
    
    struct stu student2;
    
    student1.id=528;
    student1.name="Raviteja";
    student1.company="Accenture";
    
    cout << student1.id << " | " << student1.name << " | " << student1.company << endl;
    
    student2.id = 540;
    student2.name="Subash";
    student2.company="Accenture";
    
    cout << student2.id << " | " << student2.name << " | " << student2.company << endl;
    
    struct stu *p;
    p = &student1;
    cout << p->id << " | " << p->name << " | " << p->company;
    
    
    
    return 0;
}