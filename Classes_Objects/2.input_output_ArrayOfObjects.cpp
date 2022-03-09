#include<iostream> // input and output from the user.....using" array of objects" concepts
using namespace std;


class student
{
    public:
    string name;
    int age;
    bool gender;



    void printInfo()
    {
        cout<<"Name = ";
        cout<<name<<endl;
        cout<<"Age = ";
        cout<<age<<endl;
        cout<<"Gender = ";
        cout<<gender<<endl;      
    }
};


int main()
{
    student arr[3];  // array of objects     //getting input from the user;
    for(int i=0; i<3; i++)
    {
        cout<<"Name = ";
        cin>>arr[i].name;
        cout<<"Age = ";
        cin>>arr[i].age;
        cout<<"Gender = ";
        cin>>arr[i].gender;
    }
    

    //Output loop
    for(int i=0; i<3; i++)
    {
        arr[i].printInfo();  // for each object it will call the printInfo() function
    }

        
    return 0;
}