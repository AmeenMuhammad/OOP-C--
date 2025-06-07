#include <iostream>
#include <string>

using namespace std;

class inheritance
{

public:
    string firstName;
    string lastName;
    string address;

    void person(string name, string last, string address){
        this->firstName = name;
        this->lastName = last;
        this->address = address;
    }
    inheritance(){
        cout <<"Defualt Constructor \nParent class Constructor or Base class \n";
    }
};
// Drive class 

class employee: public inheritance{
    public:
    int Id;
    string Email;
    string jobtitle;
    int phone;

    void Student(int id, string email, string jobtitle, int phone){
        
        this->Id = id;
        this->Email = email;
        this->jobtitle = jobtitle;
        this->phone = phone;
    }
    employee(){
        cout <<"\n Drive class of Inheritance base class\n";
    }
    void Display(){
        cout <<"Name: " << firstName << endl;
        cout <<"Last name: " << lastName << endl;
        cout <<"Address: " << address << endl;
        cout <<"ID: " << Id << endl;
        cout << "Job tittle: " << jobtitle << endl;
        cout << "Email: " << Email << endl;
        cout <<"Phone Number: " << phone << endl;
    }
};

int main(){
    employee s1;
    s1.firstName="Ameen";
    s1.lastName = "Muhammad";
    s1.address = "Badin";
    s1.Id = 011;
    s1.jobtitle = "Software Engninear";
    s1.Email = "ameenmuhammadjat@gmail.com";
    s1.phone = 022211;

    s1.Display();
  //  cout << emp.firstName <<"\n" << emp.lastName <<"\n" << emp.address << endl;
    return 0;
}