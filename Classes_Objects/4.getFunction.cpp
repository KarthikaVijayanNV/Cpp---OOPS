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




/* 
class student
{
    
    string name;
    int age;
    bool gender;

    public:
    void setthem (string s, int a, bool g)
    {
        name = s;
        age = a;
        gender = g;
    }

    void getthem()
    {
        cout<<"Name "<<name<<" ";
        cout<<"Age "<<age<<" ";
        cout<<"Gender "<<gender<<" ";
        cout<<endl;
    }
};

int main()
{
   int n;
   cin>>n;
   student arr[n];
 

    for(int i=0; i<n; i++)
    {
       string s;
       cin>>s;
       int a;
       cin>>a;
       bool g;
       cin>>g;

       arr[i].setthem(s,a,g);
    }

    cout<<"Student details are "<<endl;
    
    
    for(int i=0; i<n; i++)
    {
       arr[i].getthem();
    }


    return 0;
}

*/