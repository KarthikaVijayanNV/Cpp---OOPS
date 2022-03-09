#include<iostream>
using namespace std;

class Student
{
    public:
    string name;
    int age;
    bool gender;
};

int main()
{

    Student a;
    a.name = "karthika";
    a.age  = 21;
    a.gender = 1;


    cout<<a.name<<" ";
    cout<<a.age<<" ";
    cout<<a.gender<<" ";


    return 0;
}