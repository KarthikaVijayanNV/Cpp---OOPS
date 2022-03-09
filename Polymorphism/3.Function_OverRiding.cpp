#include<iostream>  // Runtime polymorphism by function overriding
using namespace std;  //Virtual Function

class base
{
    public:
    virtual void print()    // give keyword virtual and not give and check for the difference in output
    {
        cout<<"This is base class's  print function"<<endl;
    }

    void display()
    {
        cout<<"This is base class's  display function"<<endl;
    }
};

class derived : public base     // derived class of base class
{
    public:

    void print()
    {
        cout<<"This is derived class's  print function"<<endl;
    }

    void display()
    {
        cout<<"This is derived class's  display function"<<endl;
    }
    


};  


int main()
{
    base *baseptr;   // base classes pointer 
    derived d;       // derived classes object

    baseptr = &d;

    baseptr -> print();  // virtual keyword is given 
    baseptr -> display();


}