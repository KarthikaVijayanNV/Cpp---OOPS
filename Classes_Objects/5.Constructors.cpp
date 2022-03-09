#include<iostream>
using namespace std;

class student
{
    public:
    string name;

    student(string s) //constructors
    {
        name = s;
    }

};



int main()
{
    student a("karthika");

    cout<<a.name;
}