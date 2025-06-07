#include <iostream>
using namespace std;

class Array
{

public:

    string name;
    int rollNo;
    int age;
    float marks;

    void input(string a, int b, int c, float d){

         name = a;
         rollNo = b;
         age = c;
         marks = d;
    }
    void Display(){
        cout << "Name: " << name <<endl;
        cout << "Roll No: " << rollNo <<endl;
        cout << "Age: " << age << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main(){
    Array s1, s2;
    s1.input("Ameen", 8, 22, 90);
    cout << "==========================\n";
    s2.input("Ali" , 11, 15, 80);
    s1.Display();
    s2.Display();
    
    return 0;
}
