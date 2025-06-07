#include <iostream>
#include <string>

using namespace std;

class Studnt
{

public:
    string name;
    string dept;
    int rollNo;
    int contact;
    double* ptr;
    
    // Constructor create 
    Studnt(string name, string dept, int rollNo, int contact, double cgpa){
        this->name = name;
        this->dept = dept;
        this->rollNo = rollNo;
        this->contact = contact;
        ptr = new double;
        *ptr = cgpa;
    }
    // copy constructor 

    Studnt(Studnt &newObj){
        cout <<"Copy Data in copy constructor \n ==============================\n";
        this->name = newObj.name;
        this->dept = newObj.dept;
        this->rollNo = newObj.rollNo;
        this->contact= newObj.contact;
        ptr = new double;
        *ptr = *newObj.ptr;
    }
    // Remove data , or delete form memory 
    ~Studnt(){
        cout <<"Delete All memory \n";
        delete ptr;
    }
    void Display(){
        cout <<"Student Name: " << name << endl;
        cout <<"Student Department: " << dept << endl;
        cout <<"Student Roll No: " << rollNo << endl;
        cout << "Student Contact: " << contact << endl;
        cout << "Student CGPA: " << ptr << endl;
    }
};

int main(){
    Studnt s1("Ameen Muhammad", "Computer Science", 8, 01211, 4.00);
    s1.Display();

    cout <<"============================\n";
    // copy constructor
    Studnt s2(s1);
    s2.Display();

    return 0;
}