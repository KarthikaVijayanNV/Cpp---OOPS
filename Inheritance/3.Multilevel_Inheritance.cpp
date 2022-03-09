#include<iostream>     //Multilevel  Inheritance
using namespace std;

class A   //parent class  
{
    public:
    void functionA()
    {
        cout<<"Function A"<<endl;
    }

};

class B : public A     // childclass of A (parent class for C)
{
    public:
    void functionB()
    {
        cout<<"Funcrion B"<<endl;
    }

};

class C :  public B     // chiild class of B
{
    public:

};




int main()
{
    C c;
    c.functionB();    
    c.functionA();


    


    return 0;
}