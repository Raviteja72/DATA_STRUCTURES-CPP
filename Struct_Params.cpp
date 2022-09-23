
#include <iostream>

using namespace std;

struct student
{
    int id;
    string name;
}s1;

int id(struct student s)
{
    return s.id;
}

string name(struct student s)
{
    return s.name;
}
int main()
{
    struct student s3 = {528,"Ravi"};
    cout << "ID : "<< id(s3) << endl;
    cout << "Name : " << name(s3);

    return 0;
}