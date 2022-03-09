#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool gender;

    student(string s , int a, int g) //constructors
    {
        name = s;
        age =a;
        gender =g;
    }

};



int main()
{
    student a("karthika", 21, 1);  // directly assign values using constructors

    cout<<a.name<<endl;
    cout<<a.age<<endl;
    cout<<a.gender<<endl;
}