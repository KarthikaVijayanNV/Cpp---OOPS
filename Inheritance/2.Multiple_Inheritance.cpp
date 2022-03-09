#include<iostream>     //Multiple  Inheritance
using namespace std;

class A   //parent class  
{
    public:
    void functionA()
    {
        cout<<"Function A"<<endl;
    }

};

class B   //parent class
{
    public:
    void functionB()
    {
        cout<<"Funcrion B"<<endl;
    }

};

class C : public A  , public B     // child class....inherited from A & B
{
    public:

};




int main()
{
    C c;
    c.functionA();
    c.functionB();

    


    return 0;
}