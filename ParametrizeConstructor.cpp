#include <iostream>
#include <string>

using namespace std;

class ParametrizeConstructor
{
private:
   double Account = 123456;
public:

    string name;
    string subject;
    string department;
    double salary;

    ParametrizeConstructor(){
        cout << "Department Computer Science OOP C++\n";
    }

    ParametrizeConstructor(string a, string b, string c, double d){
        
        name = a;
        subject = b;
        department = c;
        salary = d;
    }
    void Display(){
        cout << "Teacher Name: " << name << endl;
        cout << "Teacher Subject: " << subject << endl;
        cout << "Teacher Department: " << department << endl;
        cout <<" Teacher Salary: " << salary << endl;
    }
};

int main(){
    ParametrizeConstructor str("Ameen", "C++ OOP", "BSCS", 45000);
    str.Display();

    return 0;
}
