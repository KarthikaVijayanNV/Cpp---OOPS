#include<iostream>      //Operator overloading   - adding two complex numbers
using namespace std;

class complexNum
{
    private:
    int real;
    int imag;

    public:

    complexNum(int r=0, int i=0 )   //constructor
    {
        real =r;
        imag =i;
    }

    complexNum operator + (complexNum   &obj)    //operator overloading
    {
        complexNum result;
        result.real = real + obj.real;
        result.imag = imag + obj.imag;

        return result;
    }


    void printInfo()
    {
        cout<<real<<" + i"<<imag<<endl;
    }
    

};



int main()
{
    complexNum C1(12,7),C2(13,8);
    complexNum C3 = C1 + C2;
    C3.printInfo();
    
}