#include<iostream> // input and output from the user.....using" array of objects" concepts
using namespace std;  // same program as previous ...slight difference


class student
{
    string name; //made it private....let's see what you can do to access this element
   
    public:
    int age;
    bool gender;


    void setName(string s)    // this function is for accessing the private element "name"
    {
        name =s;        // whenever this function is called ....string will get passed to name(attribute of each objects)
    }



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
        string s;         //for accessing the private element name...you get the name from the user
        cout<<"Name = ";    // and putting that name through the funcion.
        cin>>s;
        arr[i].setName(s);


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