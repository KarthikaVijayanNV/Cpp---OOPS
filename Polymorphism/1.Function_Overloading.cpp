#include<iostream>      //Function overloading
using namespace std;

class Student
{
    public:
    void FunctionA()
    {
        cout<<"This function is not having any arguments"<<endl;
    }

    void FunctionA(int a)
    {
        cout<<"This function is having  int argument"<<endl;

    }

    void FunctionA( double x)
    {
        cout<<"This function is having  double argument"<<endl;
    }

};



int main()
{
    Student a;
    a.FunctionA();
    a.FunctionA(5);
    a.FunctionA(6.888);

}