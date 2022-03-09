#include<iostream>
using namespace std;

class student
{
    string name; //private element

    public:
    int age;
    bool gender;

    void setName(string s)   // for getting the private element
    {
        name =s;
    }
  
    void getName()         // for printing the private element
    {
        cout<<name<<endl;
    }

   
};


int main()
{
    
  student arr[1];
  int i=0;  
   
   student a;   // object
   
   string s;
   cout<<"Name: ";
   cin>>s;
    arr[i].setName(s);   // it will take the name through the function

   a.age= 21;        // directly assigning values .....public element
   a.gender =1;      //   ,,                                ,,

    
    
    arr[i].getName();   // it will print the name through the function

   cout<<a.age<<endl;    //directly printing....public element
   cout<<a.gender<<endl;  //    ,,                  ,,


}