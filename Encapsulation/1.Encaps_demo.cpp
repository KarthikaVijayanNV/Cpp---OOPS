// Access modifiers for encapsulation

#include<iostream>
using namespace std;

class A
{
    public:
    int a;
    void functionA()
    {
        cout<<"This is public function A";
    }


    private:
    int b;
    void functionB()
    {
        cout<<"This is private function B";
    }


    protected:
    int c;
    void functionC()
    {
        cout<<"This is protected function c";
    }
};


int main()
{
    A obj;       // this is possible because it is public
    obj.a =10;
    obj.functionA();

    // obj.functionB()      is not possible because it is private function.Not accessible




}