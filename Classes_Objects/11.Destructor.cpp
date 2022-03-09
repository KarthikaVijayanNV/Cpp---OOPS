#include<iostream>
using namespace std;

class student
{
    public:
    string name;
    int age;
    bool gender;

    ~student()   //destructor is defined
    {
        cout<<"Destructor is called"<<endl;
    }


    student ()       // default constuctor
    {
        cout<<"Default constructor:"<<endl;
    }



    student(string s , int a, int g) //  parameterised constructors
    {
        cout<<"Parameterised constructor"<<endl;
        name = s;
        age =a;
        gender =g;
    }


    student (student &a)    //copy constructor made----deep copy
    {
        cout<<"Copy constructor"<<endl;
        name =a.name;
        age=a.age;
        gender =a.gender;
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

    student b;   //  it will call default constructor

    student c=a;    // or >>> student c(a);     // copy constructors   here a will be copied to c
    c.printInfo();  

}