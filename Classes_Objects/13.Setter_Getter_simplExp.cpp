#include<iostream>
using namespace std;

class student
{
    string name;
    public:
    int age;


    void setName(string s)
    {
        name = s;
    }

    void getName()
    {
        cout<<name<<endl;
    }
};



int main()
{
    student a;
    string s;
   cout<<"Name: ";
   cin>>s;

   a.setName(s);
   a.age = 18;

    a.getName();
   cout<<a.age<<endl;
    return 0;
}

 
 
  