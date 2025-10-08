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


/*
#include<iostream>
using namespace std;

class Math
{
    public:
    int  area(int l, int b)
    {
        return l*b;
    }

    int area (int r)
    {
        return 3.14 * r*r;
    }
};


int main()
{

    Math obj;
    cout<<obj.area(2,3)<<endl;
    
    cout<<obj.area(5);

    return 0;
}

    */