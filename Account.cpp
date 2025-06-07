#include <iostream>
#include <string>

using namespace std;
//inheritance class program 
class Account               // Base class 
{
// private:
//     int AccountNumbr;
//     int password;
//     double salary;
public:
    string name;
    string jobTitle;

    // Account(string name, string jobTitle){     // Constructor
    //     this->name = name;
    //     this->jobTitle;
    // }
    ~Account(){                                // Desconstructor all data delete
        cout <<"All Data Cleaned successfully: " << endl;
    }
};
// Drive class 
class Employee : public Account{
    public:
    string service;
    string Gradution;

    void Showdata(){
        cout <<"Name: " << name << endl;
        cout <<"Job title: " << jobTitle << endl;
        cout << "Service: " << service << endl;
        cout <<"Graduation: " << Gradution << endl;
    }
};

int main(){
    Employee emp;
    emp.name = "Ameen";
    emp.jobTitle = "Software enginear";
    emp.service = "Senior 14 years ";
    emp.Gradution = "PHD Data Science";

    emp.Showdata();

    return 0;
}