#include<iostream>     //Single  Inheritance
using namespace std;


class A
{
    public:
    void functionA()
    {
        cout<<"Inherited ";
    }
};


class B : public A    //child class of A
{

};



int main()
{

    B b;           // object of class B
    b.functionA();     // accessible because of inheritance


    return 0;
}