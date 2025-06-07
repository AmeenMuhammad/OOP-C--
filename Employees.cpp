#include <iostream>
#include <string>

using namespace std;

class Employees     //inheritance method use
{

public:
    string name;
    string job_title;
    int Id;
};
class Person : public Employees{  // base class inheritance
    public:
    int phone;
    int accountNumber;
};
class Information: public Person{ // base class inheritance , parent class
    public:
    double salary;
    string location;
    string Accounttype;

    void Display(){
        cout <<"Employee Name: " << name << endl;
        cout <<"Job title: " << job_title << endl;
        cout <<"Employee ID: " << Id << endl;
        cout <<"Phone Number: " << phone << endl;
        cout <<"Account number: " << accountNumber << endl;
        cout <<"Employee Salary: "<< salary << endl;
        cout <<"employee job Location: " << location << endl;
        cout <<"Employee Account type: " << Accounttype << endl;
    }
};

int main(){
    Information s1;
    s1.name = "Ameen";
    s1.job_title ="Software Enginear ";
    s1.Id = 012;
    s1.phone = 02213111;
    s1.accountNumber = 2121002;
    s1.salary = 3255000;
    s1.location = "Sahere faisal road System Limmited ";
    s1.Accounttype = "Current";

    s1.Display();
}