#include <iostream>
#include <string>

using namespace std;

class User_Book
{

public:
    string name;
    string jobTitle;
    float salry;

    void getInput(){

        cout << "Enter Employee Name: ";
        getline(cin, name);
        cout << " Enter Job Title: ";
        getline(cin, jobTitle);
        cout << "Enter Salry: ";
        cin >> salry;
        cin.ignore(); // To handle the newline character after entering salary
    }
    void DisplayDetails(){

        cout <<"\n========= Employee Salry Raiese ==================== \n";

        cout << "Name: " << name << endl;
        cout <<"Job Title: " << jobTitle << endl;
        cout << "Salary: " << salry << endl;
    }
     void SalryRaise(){
        cout << "\n============= Salry Raise ======= \n";
        cout << "Employe name: " << name << endl;
        cout << "Job title: " << jobTitle << endl;
        cout << "Salry: " << salry << endl;
    }
};
int main(){

    User_Book emp;
    emp.getInput();
    emp.SalryRaise();
    emp.DisplayDetails();

    return 0;
}