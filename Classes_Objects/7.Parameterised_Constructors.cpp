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


    void printInfo()
    {
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;      
    }

};



int main()
{
    student a("karthika", 21, 1);  // directly assign values using constructors

    a.printInfo();

}